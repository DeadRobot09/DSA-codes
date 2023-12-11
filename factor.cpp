// program to find Kth factor of N
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;

        // Iterate from 1 to n and find factors
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                factors.push_back(i);
            }
        }

        // Check if kth factor exists
        if (k <= factors.size()) {
            return factors[k - 1];
        } else {
            return -1;
        }
    }
};
