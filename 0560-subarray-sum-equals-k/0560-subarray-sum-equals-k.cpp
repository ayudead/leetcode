class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int,int>mpp;
        mpp[0] = 1;
        int presum =0;
        int cnt =0;
        for(int i =0; i<arr.size(); i++){
            presum = presum+arr[i];
            if(mpp.find(presum-k) != mpp.end()){
                cnt = cnt+mpp[presum-k];
            }
            mpp[presum]++;
        }
        return cnt;
        
    }
};