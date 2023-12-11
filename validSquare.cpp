// program to check if given number is erfect square or not
class Solution {
public:
    bool isPerfectSquare(int num) {
        // Base case: 0 and 1 are perfect squares
        if (num == 0 || num == 1) {
            return true;
        }

        // Calculate the square root
        int sqrtNum = sqrt(num);

        // Check if the square root is an integer
        return sqrtNum * sqrtNum == num;
    }
};
