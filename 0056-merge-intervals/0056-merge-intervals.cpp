class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        std::sort(arr.begin(), arr.end());
        for(int i =0; i< arr.size(); i++){
            if(ans.empty() || ans.back()[1] < arr[i][0]){
                ans.push_back(arr[i]);
            }else{
                ans.back()[1] = std::max(arr[i][1], ans.back()[1]);
            }
        }
        return ans;
    }
};