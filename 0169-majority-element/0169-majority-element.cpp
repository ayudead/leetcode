class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ele = arr[0];
        int cnt = 1;
        int n = arr.size();
        int i = 0;
        for( i=1; i<n; i++){
            if(cnt == 0){
              ele = arr[i] ;
              cnt = 1;
            }
            else if(arr[i] == ele) cnt++;
            else cnt--;
           
        }
        return ele;
        
    }
};