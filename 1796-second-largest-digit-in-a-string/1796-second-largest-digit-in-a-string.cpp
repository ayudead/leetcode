class Solution {
  public:
    int secondHighest(string st) {
      int f= -1;
      int s = -1;
      for(char c : st){
          if(isdigit(c)){
              int d = c - '0';

              if(d>f){
                  s = f;
                  f = d;

                }
              else if(d<f && d>s){
                 s = d;
                }
            }
        }
        return s;
     
    }

    
};

 /*vector<int> arr;
      for(int i=0; i<s.length(); i++){
          if(std::isdigit(s[i] )){
            arr.push_back(s[i]-'0');
          }
        }
        if(arr.size() == 0) return -1;
        std::sort(arr.begin(), arr.end());
        int max = arr.back();
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i]!=max ){
                return arr[i];
            }
        }
        return -1;*/