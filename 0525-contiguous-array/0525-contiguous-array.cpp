class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        int n = arr.size();
    
        map<int,int> mpp;
        int sum = 0;
        int maxlen = 0;
        int len = 0;
        for(int i =0; i< n ; i++){
            if (arr[i] == 0) arr[i] = -1;
            else arr[i] = 1;
            sum+=arr[i];
            if(sum == 0){
                len = i+1;
            }
            else {
                if(mpp.find(sum) != mpp.end() ){
                    len =  i - mpp[sum];
                }
            }
            maxlen = max(len,maxlen);
            if(mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }
        return maxlen;
    }
};