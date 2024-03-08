// Approach: utilize sort function for vectors by adding all elements to num1 and sorting array to get result

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end()); // removes placeholder 0s in array
        for (int i = 0; i < n; i++) {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};