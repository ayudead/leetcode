class Solution {
public:
    vector<bool> visited;
    vector<vector<int>> ans;
    vector<int> temp;
    void permutation (vector<int>& arr){
        int n = arr.size();
        if(temp.size() == n) {
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i<n ; i++){
            if(visited[i]) continue;
            if(i > 0 && arr[i] == arr[i-1] && !visited[i-1])continue;
            visited[i] = true;
            temp.push_back(arr[i]);
            permutation(arr);
            temp.pop_back();
            visited[i] = false;  
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        visited.resize(nums.size(), false);
        permutation(nums);
        return ans;
    }
};