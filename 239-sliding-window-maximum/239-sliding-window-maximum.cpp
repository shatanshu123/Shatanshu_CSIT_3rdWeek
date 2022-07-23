//STRIVER_SDE_SHEET

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        std::map<int, int, std::greater<int>> max_heap;
        
        int i = 0;
        std::vector<int> out;
        for(; i < k and i < nums.size(); ++i)
        {
            max_heap[nums[i]]++;
        }
        
        out.push_back((*max_heap.begin()).first);
        
        for(; i < nums.size(); ++i)
        {
            max_heap[nums[i - k]]--;
            if(max_heap[nums[i - k]] == 0)
            {
                max_heap.erase(nums[i - k]);
            }
            max_heap[nums[i]]++;
            out.push_back((*max_heap.begin()).first);
        }
        
        return out;
        
    } 
        
};
