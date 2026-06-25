class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        int index  = 0;
        for(int i = 0; i<s.length(); i++){
            index = s[i] - 'a';
            if(index>=0 && index<26){
                arr[index]++;
            }
        }
        for(int i = 0; i<s.length() ; i++){
            if(arr[s[i] - 'a'] == 1 ){
                return i;
            }
        }
       
        
        return -1;
        
    }
};