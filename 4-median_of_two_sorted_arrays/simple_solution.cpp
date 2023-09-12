// Time Complexity: O((n + m)log(n + m))
// Space Complexity: O(n + m)
class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> v = nums1;
        v.insert(v.end(), nums2.begin(), nums2.end());
        
        std::sort(v.begin(), v.end());

        int n = v.size();
        
        return  n % 2 ? v[n / 2] : (v[(n - 1) / 2] + v[n / 2]) / 2.0;
    }
};
