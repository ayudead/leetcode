class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
         int n = arr.size();
        vector<int> ans(n);
        ans[0] = 1;
        int suf = 1;
        for(int i=1; i<n ; i++){
            ans[i] = ans[i-1] *arr[i-1];
            
        }
        for(int i = n-1; i>=0; i--){
            ans[i] = ans[i] *suf;
            suf *= arr[i]; 
        }
        return ans;
    }
};