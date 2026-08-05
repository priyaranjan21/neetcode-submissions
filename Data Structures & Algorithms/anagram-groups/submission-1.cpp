class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> res;
        vector<vector<string>> temp;
        string count[26];
        for(int i=0;i<strs.size();i++){
            vector<int> count(26,0);
            for(char c: strs[i]){
                count[c-'a']++;
            }
            string key = to_string(count[0]);
            for(int i=1;i<26;++i){
                key += "," + to_string(count[i]);
            }
            res[key].push_back(strs[i]);
        }
        for(auto it:res){
            temp.push_back(it.second);
        }
        return temp;
    }
};
