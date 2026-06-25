class Solution {
public:
    void sortColors(vector<int>& arr) {
        int i=0;
        int j=0;
        int k = arr.size()-1;
        while(j<=k){
          if(arr[j] ==0){
              std::swap(arr[i], arr[j]);
              i++;
              j++;
           }
          else if(arr[j] == 1){
              j++;
           }
          else if(arr[j] == 2){
               std::swap(arr[k] , arr[j]);
               k--;
           }
        }
    }
};