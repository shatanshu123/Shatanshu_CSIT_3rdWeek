class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = 0 , j = 0;
        int n1 = num1.size() , n2 = num2.size();
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int carry = 0;
        string ans = "";
        while(i<n1 and j<n2){
            int sum = num1[i]-'0' + num2[j]-'0' + carry;
            ans += sum%10 +  '0';
            carry = sum/10;
            i++; j++;
        }
        while(i<n1){
            int sum = num1[i]-'0' + carry;
            ans += sum%10 +  '0';
            carry = sum/10;
            i++; 
        }
        while(j<n2){
            int sum = num2[j]-'0' + carry;
            ans += sum%10 +  '0';
            carry = sum/10;
            j++;
        }
        if(carry) ans += carry+'0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};