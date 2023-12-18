// problem to reverse the order of sentence in an array
class Solution {
public:
    string reverseWords(string s) {
        // Create a stringstream to process the input string
        stringstream ss(s);
        
        // Create a string to store each word
        string word;
        
        // Create a string to store the reversed order of words
        string reversed;
        
        // Iterate through each word in the stringstream
        while (ss >> word) {
            // Insert each word at the beginning of the reversed string
            reversed = word + " " + reversed;
        }
        
        // Remove the trailing space, if any
        if (!reversed.empty()) {
            reversed.pop_back();
        }
        
        return reversed;
    }
};
