//program to make array element equal with minimum increment or decrement move.
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array

        int n = nums.size();
        int median = (n % 2 == 0) ? (nums[n / 2 - 1] + nums[n / 2]) / 2 : nums[n / 2];

        int moves = 0;
        for (int num : nums) {
            moves += abs(num - median);
        }

        return moves;
    }
};
