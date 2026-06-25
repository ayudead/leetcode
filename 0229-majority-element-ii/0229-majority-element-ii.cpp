class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        
        int n = arr.size();
        int ele1 = 0;
        int cnt1 = 0;
        int ele2 = 0;
        int cnt2 = 0;

        for(int i = 0; i<n ; i++){
            if(arr[i] == ele1){
             cnt1++;
            } 
            else if(arr[i] == ele2){
               cnt2++; 
            }
            else if(cnt1 == 0){
              ele1 = arr[i]; cnt1=1;
            } 
            else if(cnt2 == 0){
              ele2 = arr[i]; cnt2=1;
            } 
            else {
                cnt1--;
                cnt2--;
            }    
        }
        cnt1=0;
        cnt2=0;
        for(int i  = 0; i<n; i++){
            if(arr[i]==ele1) cnt1++;
            if(arr[i]==ele2) cnt2++;
        }
        vector<int> result;
        if(cnt1>arr.size()/3) result.push_back(ele1);
        if(cnt2>arr.size()/3 && ele2 != ele1) result.push_back(ele2);
        std::sort(arr.begin(), arr.end());
        return result;
    }
};