class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid = s.size()/2;
        for(int i=0; i< mid; i++){
            std::swap(s[i], s[s.size()-i-1]);
        }
       
        
    }
};