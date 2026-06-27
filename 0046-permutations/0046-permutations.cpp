class Solution {
public:
    vector<vector<int>> ans;
    void permutation(int 
    
    idx ,vector<int> arr){
        int n = arr.size();
        if(idx == n) {
            ans.push_back(arr);
            return;
        } 
        for(int i = idx ; i<n; i++){
            swap (arr[i] , arr[idx]);
            permutation(idx+1,arr);
            swap(arr[i] , arr[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(0, nums);
        return ans;
    }
};