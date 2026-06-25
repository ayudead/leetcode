class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int longest  = 0;
        unordered_set<int> st;
        for(auto x : arr){
            st.insert(x);
        }
        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int cnt= 1;
                int current =  x;
                while(st.find(current +1) != st.end()){
                    cnt ++;
                    current++;
                }
                longest =  max(cnt, longest);
            }
        }
        return longest;
        
    }
};