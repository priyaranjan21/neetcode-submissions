class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> temp;
        vector<vector<string>> res;
        for(const auto& s :strs){
            string sortedS = s;
            sort(sortedS.begin() , sortedS.end());
            temp[sortedS].push_back(s);
        }
        for(auto& pair : temp) {
            res.push_back(pair.second);
        }
        return res;
    }
};
