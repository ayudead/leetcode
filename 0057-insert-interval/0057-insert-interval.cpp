class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) {
        vector<vector<int>> res;
        int i = 0;
        int ns = nin[0];
        int ne = nin[1];
        for(i =0; i<in.size(); i++ ){
            if(in[i][1] >= ns && in[i][0] <= ne){
                ns = std::min(ns, in[i][0]);
                ne = std::max(ne, in[i][1]);
                
            }
            else if(in[i][1] < ns){
                res.push_back(in[i]);
            }
            else if(in[i][0] > ne){
                break;
            }
        }
        res.push_back({ns,ne});
        while(i<in.size()){
            res.push_back(in[i]);
            i++;
        }

        return res;
        
    }
};