// program yo check if given string contains word from word dictornay .
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // Create a set for faster word lookup
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

        int n = s.length();
        // dp[i] represents whether the substring s[0...i-1] can be segmented into words from the dictionary
        vector<bool> dp(n + 1, false);
        dp[0] = true; // Empty string is always breakable

        // Iterate through each character in the string
        for (int i = 1; i <= n; ++i) {
            // Check if any word in the dictionary can be extended to the current position
            for (int j = i - 1; j >= 0; --j) {
                if (dp[j] && wordSet.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
