class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        for(int i=0;i<matrix.size();i++){
            flag = binary_search(matrix[i],target,0,matrix[i].size()-1);
            if(flag==true){
                break;
            }
        }
        return flag;
}
    bool binary_search(vector<int>& arr,int target , int start, int end ){
        if (start > end){
            return false;
        }
        int mid = start + (end - start) / 2;
        if(arr[mid]==target){
            return true;
        }else if(arr[mid] < target){
            return binary_search(arr,target,mid + 1,end);
        }else {
           return binary_search(arr,target,start,mid -1 );
        }
    }
};
