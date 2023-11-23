class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;

        for (int i = 0; i < l.size(); ++i) {
            vector<int> subarray(nums.begin() + l[i], nums.begin() + r[i] + 1);
            result.push_back(isArithmetic(subarray));
        }

        return result;
    }

private:
    bool isArithmetic(vector<int>& subarray) {
        int n = subarray.size();

        // Check if the subarray has less than 2 elements
        if (n < 2) {
            return true;  // Trivially an arithmetic sequence
        }

        // Sort the subarray
        sort(subarray.begin(), subarray.end());

        // Calculate the common difference
        int commonDiff = subarray[1] - subarray[0];

        // Check if the sorted subarray forms an arithmetic sequence
        for (int i = 2; i < n; ++i) {
            if (subarray[i] - subarray[i - 1] != commonDiff) {
                return false;
            }
        }

        return true;
    }
};
