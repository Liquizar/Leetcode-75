// This class represents a solution for reversing the order of words in a given string.
class Solution {
public:
    // Function to reverse the order of words in a given string.
    // Parameters:
    //   - s: The input string.
    // Returns:
    //   - The input string with reversed word order.
    string reverseWords(string s) {
        // Check if the input string is empty.
        if (s.size() == 0)
            return s;

        // Initialize variables for storing the reversed string and the end index of the current word.
        string result;
        int end = s.length();

        // Iterate through the input string from the end to the beginning.
        for (int i = s.length() - 1; i >= 0; i--) {
            // If a space is encountered, update the end index of the current word.
            if (s[i] == ' ') {
                end = i;
            }
            // If the beginning of a word is found, append it to the result string.
            else if (i == 0 || s[i - 1] == ' ') {
                // If the result string is not empty, add a space before appending the word.
                if (!result.empty()) {
                    result += ' ';
                }
                // Append the current word to the result string.
                result += s.substr(i, end - i);
            }
        }

        // Return the string with reversed word order.
        return result;
    }
};
