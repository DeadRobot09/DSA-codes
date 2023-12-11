// program to check the appropriate parenthisis.
class Solution {
public:
    bool isValid(string s) {
        // Define a mapping for open and close brackets
        unordered_map<char, char> bracketMapping = {{')', '('}, {']', '['}, {'}', '{'}};

        // Use a stack to keep track of open brackets
        stack<char> bracketStack;

        // Iterate through each character in the string
        for (char c : s) {
            // If the character is a closing bracket
            if (bracketMapping.find(c) != bracketMapping.end()) {
                // Pop the top element from the stack if it's not empty, otherwise assign a dummy value
                char topElement = bracketStack.empty() ? '#' : bracketStack.top();

                // Check if the popped element matches the corresponding open bracket
                if (bracketMapping[c] != topElement) {
                    return false;
                }

                // Pop the element from the stack
                bracketStack.pop();
            } else {
                // If it's an open bracket, push it onto the stack
                bracketStack.push(c);
            }
        }

        // The string is valid if the stack is empty at the end
        return bracketStack.empty();
    }
};
