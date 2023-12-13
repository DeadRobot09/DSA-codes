/*Given an integer n, your task is to count how many strings of length n can be formed under the following rules:

Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
Each vowel 'a' may only be followed by an 'e'.
Each vowel 'e' may only be followed by an 'a' or an 'i'.
Each vowel 'i' may not be followed by another 'i'.
Each vowel 'o' may only be followed by an 'i' or a 'u'.
Each vowel 'u' may only be followed by an 'a'.
Since the answer may be too large, return it modulo 10^9 + 7.*/

class Solution {
public:
    const long long MOD = 1e9 + 7;

    int countVowelPermutation(int n) {
        vector<vector<long long>> dp(n + 1, vector<long long>(5, 0));

        // Base case: there is one way to form strings of length 1
        for (int i = 0; i < 5; ++i) {
            dp[1][i] = 1;
        }

        for (int i = 2; i <= n; ++i) {
            dp[i][0] = dp[i - 1][1];
            dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD;
            dp[i][2] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][3] + dp[i - 1][4]) % MOD;
            dp[i][3] = (dp[i - 1][2] + dp[i - 1][4]) % MOD;
            dp[i][4] = dp[i - 1][0];
        }

        long long result = 0;
        for (int i = 0; i < 5; ++i) {
            result = (result + dp[n][i]) % MOD;
        }

        return static_cast<int>(result);
    }
};


  
