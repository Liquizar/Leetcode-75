class Solution {
public:
    // Function to check if a string is a subsequence of another string.
    // Parameters:
    //   - s: The potential subsequence.
    //   - t: The target string.
    // Returns:
    //   - True if s is a subsequence of t, false otherwise.
    bool isSubsequence(string s, string t) {
        // Initialize two pointers for traversing strings s and t.
        int i = 0, j = 0;

        // Continue iterating until the end of either string is reached.
        while (i < s.length() && j < t.length()) {
            // If the current characters match, move to the next character in s.
            if (s[i] == t[j])
                i++;

            // Move to the next character in t.
            j++;
        }

        // Check if all characters in s have been matched (i reached the end of s).
        return i == s.length();
    }
};
