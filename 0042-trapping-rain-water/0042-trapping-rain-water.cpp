class Solution {
public:
    int trap(vector<int>& arr) {
        int n=  arr.size();
        int l =0;
        int lm=0;
        int rm =0;
        int r = n-1;
        int t=0;
        while(l<r){
            if(arr[l] <= arr[r]){
                if(lm> arr[l]){
                    t+=lm-arr[l];
                }
                else lm = arr[l];
                l++;
            }
            else {
                if(rm> arr[r]){
                    t+=rm-arr[r];
                }
                else rm = arr[r];
                r--;
            }
        }
        return t;
    }
};