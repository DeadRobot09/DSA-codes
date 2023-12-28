//Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).
//The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
class Solution {
public:
    int maxScore(string s) {
        int maxScore = 0;
        int zerosInLeft = 0;
        int onesInRight = count(s.begin(), s.end(), '1');
        
        // Iterate through the string, considering each split point
        for (int i = 0; i < s.size() - 1; ++i) {
            // Update count of zeros in the left substring
            if (s[i] == '0') {
                zerosInLeft++;
            } else {
                // Update count of ones in the right substring
                onesInRight--;
            }

            // Calculate the score for the current split point
            int score = zerosInLeft + onesInRight;
            
            // Update the maximum score if the current score is higher
            maxScore = max(maxScore, score);
        }

        return maxScore;
    }
};
