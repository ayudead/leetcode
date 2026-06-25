class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
         sort(in.begin(), in.end(),
        [](vector<int> &a, vector<int> &b){
            return a[1]<b[1];
        });
        int cnt = 1;
        int pre_in = 0;
        for(int i=1;i<in.size(); i++){
            if(in[i][0] >= in[pre_in][1]){
                pre_in = i;
                cnt++;
                
            }
            
        }
        return in.size() - cnt;
        
    }
};