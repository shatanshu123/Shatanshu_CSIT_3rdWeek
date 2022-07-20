//STRIVER_SDE_SHEET

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> sorted_arr;
        //Merging the two sorted arrays
        while(i < m and j < n) {
            if(nums1[i] <= nums2[j]) {
                sorted_arr.push_back(nums1[i]);
                i++;
            }
            else {
                sorted_arr.push_back(nums2[j]);
                j++;
            }
        }
        //Pushing back remaining elements from the larger array to the sorted array
        while(i < m) {
            sorted_arr.push_back(nums1[i]);
            i++;
        }
        while(j < n) {
            sorted_arr.push_back(nums2[j]);
            j++;
        }
        //Finding median
        double median = 0.0;
        int size = m + n;
        if(size % 2 == 0)
            median = (sorted_arr[size / 2] + sorted_arr[(size / 2) - 1]) / 2.0;
        else
            median = (double)sorted_arr[size / 2];
        
        return median;
    }
};