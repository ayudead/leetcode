class Solution {
public:
     void heapify (vector<int> &arr, int n , int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left < n && arr[left] > arr[largest]){
            largest = left;
        }
        if(right < n && arr[right] > arr[largest]){
            largest = right;
        }
        if(largest != i){
            swap(arr[i] , arr[largest]);
            heapify(arr, n , largest);
        }
    }
    void buildheap(vector<int> &arr, int n){
        for(int i = n/2-1; i>=0; i-- ){
            heapify(arr, n , i);
        }
    }
    int findKthLargest(vector<int>& arr, int k) {
        int n  = arr.size();
        buildheap(arr, n);
        for (int cnt = 1; cnt <= k; cnt++) {
          if (cnt == k)
          return arr[0];

         swap(arr[0], arr[n - cnt]);
          heapify(arr, n - cnt, 0);
        }
        return -1;
    }
};