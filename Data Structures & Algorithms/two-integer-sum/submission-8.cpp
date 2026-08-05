class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> temp;
        int rem;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            rem = target-nums[i];
            if(temp[rem] && temp[rem] != i){
                res.push_back(i);
                res.push_back(temp[rem]);
                break;
            }
        }
        return res;
    }
};
