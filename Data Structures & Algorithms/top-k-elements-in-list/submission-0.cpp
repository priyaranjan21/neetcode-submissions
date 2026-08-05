class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int ,int> temp;
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }

        vector<pair<int , int>> arr;

        for(const auto& p : temp){
            arr.push_back({p.second,p.first});
        }
        sort(arr.rbegin() , arr.rend());

        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }

        return res;
    }
};
