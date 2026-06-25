class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        int i = n1-1;
        int j = n2-1;
        int sum = 0;
        int result_bit = 0;
        string result = "";
        int carry = 0;
        int bit1 = s1[i];
        int bit2 = s2[j];
        while(i>=0 || j>=0 || carry!=0){
            bit1 = (i>=0)?s1[i] - '0': 0;
            bit2 = (j>=0)? s2[j] - '0': 0;
            sum = bit1+bit2+carry;
            carry = sum/2;
            result_bit = sum%2;
            result.push_back( result_bit+ '0') ;
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        while(result.size()>1 && result[0]=='0'){
            result.erase(result.begin());
        }
        return result;
        
    }
};