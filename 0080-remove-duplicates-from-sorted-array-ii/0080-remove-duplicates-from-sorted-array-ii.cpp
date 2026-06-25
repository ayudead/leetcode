class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j =2;
        int n = arr.size();
        if(n <= 2) return n;
        for(int i=2; i<n; i++){
            int k = i+1;
            if(arr[i] != arr[j-2]){
                arr[j] = arr[i];
                j++;
            }
        }
        return j;
    }
};