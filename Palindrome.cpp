//Longest palindromic substring.
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        string longestPalindromicSubstr = "";

        for (int i = 0; i < n; i++) {
            // For odd length palindromes
            string oddPalindrome = expandAroundCenter(s, i, i);
            // For even length palindromes
            string evenPalindrome = expandAroundCenter(s, i, i + 1);

            // Update the longest palindromic substring found so far
            if (oddPalindrome.size() > longestPalindromicSubstr.size()) {
                longestPalindromicSubstr = oddPalindrome;
            }
            if (evenPalindrome.size() > longestPalindromicSubstr.size()) {
                longestPalindromicSubstr = evenPalindrome;
            }
        }

        return longestPalindromicSubstr;
    }

private:
    string expandAroundCenter(string s, int left, int right) {
        int n = s.size();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        // Return the palindromic substring
        return s.substr(left + 1, right - left - 1);
        
    }
};
