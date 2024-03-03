//Given an array of strings arr[] of length n representing non-negative integers, arrange them in a manner, such that, after concatanating them in order, it results in the largest possible number. Since the result may be very large, return it as a string.
class Solution {
public:
    // Custom comparator function to sort strings in descending order of their concatenated forms
    static bool comp(const string& a, const string& b) {
        // Concatenate strings in two different orders
        string ab = a + b;
        string ba = b + a;

        // Compare concatenated strings in descending order
        return ab > ba;
    }

    // Function to return the arrangement with the largest value as a string
    string printLargest(int n, vector<string>& arr) {
        // Sort the array of strings using the custom comparator
        sort(arr.begin(), arr.end(), comp);

        // Concatenate sorted strings to form the largest number
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += arr[i];
        }

        return ans;
    }
};
