//STRIVER_SDE_SHEET

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int element = nums[0];
        for(int i=1; i<nums.size(); i++){
            element = element ^ nums[i];
        }
        return element;
    }
};