class Solution {
public:
    int pivotIndex(vector<int>& arr) {
         int i = 0;
        int n =  arr.size();
        int totalsum = accumulate(arr.begin(), arr.end(), 0);
        int sum =0;
        while(i<n){
            if(i==0) sum=0;
            else sum+= arr[i-1];
           int y  =  totalsum-sum - arr[i];
            if(sum == y) return i;
            else i++;
        }
        return -1;
    }
};