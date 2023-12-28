//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort both input vectors to use std::set_intersection
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        // Initialize a vector to store the intersection
        vector<int> result;

        // Find the intersection using std::set_intersection
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
                          back_inserter(result));

        // Remove duplicates from the result vector
        result.erase(unique(result.begin(), result.end()), result.end());

        return result;
    }
};
