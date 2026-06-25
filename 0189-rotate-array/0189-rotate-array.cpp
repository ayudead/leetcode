class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        if(d == 0) return;

        vector<int> temp(d);

        // store last d elements
        for(int i = 0; i < d; i++){
            temp[i] = arr[n - d + i];
        }

        // shift remaining elements to right
        for(int i = n - 1; i >= d; i--){
            arr[i] = arr[i - d];
        }

        // put temp at front
        for(int i = 0; i < d; i++){
            arr[i] = temp[i];
        }
    }
};