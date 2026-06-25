class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int n = s.length();
        int sign = 1;
        int i =0;
        int digit =0;
       
        while(i<n && std::isspace(s[i])){
            {
                i++;
            }
        }
        if(i<n && (s[i] == '+'|| s[i] == '-' )){
            if (s[i] == '+'){
                sign = 1;
                i++;
            }
            else{
                sign = -1;
                i++;
            }
        }
        while(i<n){
            if(std::isdigit(s[i])){
                digit = s[i] - '0';
                if (ans>(INT_MAX-digit)/10){
                    if(sign ==1){
                        return INT_MAX;
                    }
                    else{
                        return INT_MIN;
                    }
                }
                ans = ans*10+digit;

            }
            else{
                break;
            }
            i++;
        }
        return ans*sign;

        
    }
};