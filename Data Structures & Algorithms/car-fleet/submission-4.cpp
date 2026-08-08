class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int , int>> pair;
        for(int i=0;i < position.size();i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        vector<double> stack;
        for(auto& p : pair){
            stack.push_back((double)(target-p.first)/p.second);
            if(stack.size() >=2 && stack.back() <= stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};

/*
[1 , 3]
[4 , 2]
target = 10

(10-1)/3 = 3
(10-4)/2 = 3

[3 , 3 , 4 , 5]

[4,1,0,7], speed = [2,2,1,1]

time [6/2 , 9/2 , 10/1 3/1]
[3 , 4.5 , 10 ,3]
[3 , 3 , 4.5 , 10]

[ 3 3 3 3 33]= 1

position=[10,8,0,5,3]
speed=   [2,4,1,1,3]

time = [1,1,12,7,3]





*/