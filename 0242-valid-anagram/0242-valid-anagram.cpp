class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int index = 0;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            index = s[i] - 'a';
            if(index>=0 && index<26 ){
               arr[index]++;
            }
        }
        for(int i = 0; i<t.length(); i++){
            index = t[i] - 'a';
            if(index>=0 && index<26 ){
                arr[index]--;
            }
            
        }

        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
        
    }
};