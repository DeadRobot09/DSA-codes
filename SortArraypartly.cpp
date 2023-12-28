//Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
//Return any array that satisfies this condition.
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int evenIndex = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] % 2 == 0) {
                // Swap the current element with the element at evenIndex
                swap(nums[i], nums[evenIndex]);
                evenIndex++;
            }
        }

        return nums;  // Add this line to return the modified vector
    }
};
