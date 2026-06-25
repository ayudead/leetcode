class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int l =0;
        int r = n-1;
        if( n==1) return 0;
        while(l<r){
            int maxi = min(arr[l], arr[r]) * (r-l);
            ans = max(ans, maxi);
            if(arr[l] < arr[r]) l++;
            else r--;
        }
        return ans;
    }
};