class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    set<int>st;
    void permutation(vector<int> arr){
        int n = arr.size();
        if(temp.size() == n) {
            ans.push_back(temp);
            return;
        } 
        for(int i =0; i<n; i++){
            if(st.find(arr[i]) == st.end()){
                temp.push_back(arr[i]);
                st.insert(arr[i]);
                permutation(arr);
                temp.pop_back();
                st.erase(arr[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums);
        return ans;
    }
};