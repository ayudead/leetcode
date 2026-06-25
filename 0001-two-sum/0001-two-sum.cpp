class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n =  arr.size();
        map<int,int>mpp;
        for(int i=0; i<n; i++){
            int a = arr[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()){
                return  {mpp[more], i};
            }
            mpp[a] = i;
        }
        return{-1,-1};
    }
};