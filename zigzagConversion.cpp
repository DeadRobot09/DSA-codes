class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;

        vector<string> v(numRows, "");
        int j = 0, dir = 1;
        
        for (char c : s) {
            v[j] += c;
            if (j == numRows - 1 && dir == 1) dir = -1;
            else if (j == 0 && dir == -1) dir = 1;
            j += dir;
        }
        
        string res;
        for (string& row : v) {
            res += row;
        }
        
        return res;
    }
};
