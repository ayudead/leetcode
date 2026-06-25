
class Solution {
public:
    int partition(vector<int> &arr, int low,int high){
        int i = low;
        int j = high;
        int pivot = arr[i];
        while(i<j){
            while(arr[i] <= pivot && i<=high-1 ) i++;
            while(arr[j] > pivot && j>=low+1) j--;
            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[low] ,arr[j]);
        return j;
    }
     void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int p = partition(arr, low, high);
            quickSort(arr, low, p - 1);
            quickSort(arr, p + 1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};