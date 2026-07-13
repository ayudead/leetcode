class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
         int n = arr.size();
        
        int currentmin = 0;
        int globalmin = arr[0];
        
        int totalsum = 0;
        
        int currentmax = 0;
        int globalmax = arr[0];
        
        for(int i =0; i<n; i++){
            totalsum += arr[i];
            
            currentmin = std::min(arr[i], currentmin+arr[i]);
            globalmin = std::min(currentmin, globalmin);
            
            currentmax = std::max(currentmax+arr[i], arr[i] );
            globalmax = std::max(currentmax, globalmax);
            
            

        }
        if(globalmax < 0) return globalmax; 
        int circularsum = totalsum - globalmin;
        return std::max(circularsum,globalmax);
    }
};