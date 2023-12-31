class Solution {
public:
    // Function to merge two strings alternately.
    // Parameters:
    //   - word1: The first input string.
    //   - word2: The second input string.
    // Returns:
    //   - A new string obtained by merging characters alternately from word1 and word2.
    string mergeAlternately(string word1, string word2) {
        // Initialize an empty string to store the merged result.
        string ans = "";
        
        // Initialize an index variable for iterating through both input strings.
        int i = 0;
        
        // Continue iterating until we reach the end of both input strings.
        while (i < word1.size() || i < word2.size()) {
            // If there are remaining characters in word1, append the character to the result.
            if (i < word1.size())
                ans += word1[i];
            
            // If there are remaining characters in word2, append the character to the result.
            if (i < word2.size())
                ans += word2[i];
            
            // Move to the next character position.
            i++;
        }
        
        // Return the final merged string.
        return ans;
    }
};
