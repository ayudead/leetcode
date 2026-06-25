class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size()-1;
        int i =n-1;
        while(i>=0 && arr[i]>=arr[i+1]){
            i--;
        }
        if (i >=0){
        for(int j = n; j>i; j--){
            if(arr[j]>arr[i]){
                std::swap(arr[i],arr[j]);
                break;}
        
        }
            
        }std::reverse(arr.begin()+i+1, arr.end());
    }
};