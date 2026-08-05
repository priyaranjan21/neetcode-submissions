class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int sum;
        vector<int>res;
        vector<pair<int, int>> nums_with_index;
        for(int i=0;i<nums.size();i++){
            nums_with_index.push_back({nums[i], i});
        }
        sort(nums_with_index.begin(),nums_with_index.end());
        while(start<end){
            sum = nums_with_index[start].first + nums_with_index[end].first;
            if(sum > target){
                end--;
            }
            else if(sum < target){
                start++;
            }
            else {
                res.push_back(nums_with_index[start].second);
                res.push_back(nums_with_index[end].second);
                break;
            }
        } 
        sort(res.begin(), res.end());
        return res;
    }
};
