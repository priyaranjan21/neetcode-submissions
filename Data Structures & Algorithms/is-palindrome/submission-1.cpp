class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end = s.size()-1;
        bool flag = true;
        while( start < end){
            if(!isAlphanumeric(s[start])){
                start++;
                continue;
            }
            if(!isAlphanumeric(s[end])){
                end--;
                continue;
            }
            if( tolower(s[start]) != tolower(s[end])){
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
    bool isAlphanumeric(char c){
        if((c >= 'A' && c<= 'Z') || 
            (c >= 'a' && c <= 'z' ) || 
            (c >= '0' && c <= '9')) {
            return true;
            }
        return false;
    }
};
