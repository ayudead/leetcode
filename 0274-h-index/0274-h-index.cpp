class Solution {
public:
    int hIndex(vector<int>& arr) {
        std::sort(arr.begin() , arr.end());
        for(int i =0; i<arr.size(); i++){
            int rem = arr.size()- i;
            if(arr[i] >= rem){
                return rem;
            }
        }
        return 0;
        
    }
};