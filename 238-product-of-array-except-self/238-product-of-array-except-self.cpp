class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        int q = 1;
        int n = nums.size();
        vector<int> ans(n,1);
        for(int i = 0;i<n;i++){
            ans[i] =ans[i]*p;
            p = p*nums[i];
            int j = n-i-1;  
            ans[j] = ans[j]*q;
            q = q*nums[j];
        }
        return ans;
    }

};