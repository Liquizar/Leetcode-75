class Solution {
public:
    // Function to reverse the vowels in a given string.
    // Parameters:
    //   - s: The input string.
    // Returns:
    //   - The input string with reversed vowels.
    string reverseVowels(string s) {
        // Initialize two pointers for traversing the string from both ends.
        int i = 0;
        int j = s.size() - 1;

        // Continue swapping vowels from the beginning and end of the string until the pointers meet.
        while (i < j) {
            bool flag1 = false, flag2 = false;

            // Check if the character at position i is a vowel.
            if (isVowel(s[i]))
                flag1 = true;

            // Check if the character at position j is a vowel.
            if (isVowel(s[j]))
                flag2 = true;

            // If both characters at positions i and j are vowels, swap them.
            if (flag1 && flag2) {
                swap(s[i], s[j]);
                i++;
                j--;
            }

            // If the character at position i is not a vowel, move to the next position.
            if (!flag1)
                i++;

            // If the character at position j is not a vowel, move to the previous position.
            if (!flag2)
                j--;
        }

        // Return the string with reversed vowels.
        return s;
    }

private:
    // Helper function to check if a given character is a vowel.
    // Parameters:
    //   - c: The character to be checked.
    // Returns:
    //   - True if the character is a vowel, false otherwise.
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};
