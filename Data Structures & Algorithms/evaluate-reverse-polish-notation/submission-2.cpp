class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stak;
        int res = stoi(tokens[0]);
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] != "*" && tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/"){
                stak.push(tokens[i]);
            }else{
                int b = stoi(stak.top());
                stak.pop();
                int a = stoi(stak.top());
                stak.pop();
                if(tokens[i] == "*"){
                        res = a * b;
                    stak.push(to_string(res));
                }else if(tokens[i] == "+"){
                        res = a + b;
                    stak.push(to_string(res));
                }else if(tokens[i] == "-"){
                        res = a-b;
                    stak.push(to_string(res));
                }
                else {
                    res = a/b;
                    stak.push(to_string(res));
                }
            }
        }
        return res;
    }
};
