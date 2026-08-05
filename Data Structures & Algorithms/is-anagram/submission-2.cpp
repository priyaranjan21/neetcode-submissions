class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> res;
        for(int i=0;i<s.size();i++){
            res[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(res[t[i]] > 0){
                res[t[i]]--;
            }
        }
        for(auto it: res){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};
