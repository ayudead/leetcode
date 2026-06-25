class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        /*int low = 0;
        int high = arr.size()-1;
        if(k<arr[0]) return k;
        else{
            while(low<=high){
                int mid = (low+high)/2;
                int mis = arr[mid] - (mid+1);
                if(mis < k) low = mid+1;
                else high = mid-1;
            }
        }
        return k+(high+1);*/
        if(k<arr[0]) return k;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] <=k) k++;
            else break;
        }
        return k;

    }
};