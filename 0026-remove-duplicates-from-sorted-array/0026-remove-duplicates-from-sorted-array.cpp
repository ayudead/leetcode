class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j =0;
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            int k = i+1;
            if(arr[i] != arr[k]){
                arr[j] = arr[i];
                j++;
            }

        }
        arr[j] = arr[n-1];
        j++;
        return j;
    }
};