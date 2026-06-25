class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        int n  = arr.size();
        int cnt = 0;
        sort(arr.begin(), arr.end());
        for(int i =n-1; i>1; i--){
            int k = i-1;
            int j = 0;
            while(j<k){
                if(arr[j] + arr[k] > arr[i]) {
                cnt = cnt+ k-j;
                k--;
                }
                else j++;
            }
            
        }
        return cnt;
    }
};