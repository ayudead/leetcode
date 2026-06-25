class Solution {
public:
    int lob(vector<int> &arr, int target){
       int lb = arr.size();
       int low = 0;
       int high = lb-1;
       while(low<=high){
           int mid = (low+high)/2;
           if(arr[mid] >= target){
               lb =mid;
               high = mid-1;
           }
           else low = mid+1;
       }
       return lb;
   }
   int upb(vector<int> &arr, int target){
       int ub = arr.size();
       int low = 0;
       int high = ub-1;
       while(low<=high){
           int mid = (low+high)/2;
           if(arr[mid] > target){
               ub =mid;
               high = mid-1;
           }
           else low = mid+1;
       }
       return ub;
   }
    vector<int> searchRange(vector<int>& arr, int target) {
        int lb = lob(arr, target);
        if(lb == arr.size() || arr[lb] != target) return {-1,-1};
        int ub = upb(arr, target);
        
        return {lb,ub-1};
    }
};