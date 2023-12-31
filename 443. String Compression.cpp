class Solution {
public:
    // Function to compress a character array by replacing consecutive repeating characters with their count.
    // Parameters:
    //   - chars: A vector of characters representing the input array.
    // Returns:
    //   - The length of the compressed array.
    int compress(vector<char>& chars) {
        // Initialize two pointers for reading and writing in the array.
        int read = 0;
        int write = 0;

        // Continue processing the array until the end is reached.
        while (read < chars.size()) {
            // Record the current character and initialize a count variable.
            char current_char = chars[read];
            int count = 0;

            // Count consecutive occurrences of the current character.
            while (read < chars.size() && chars[read] == current_char) {
                count++;
                read++;
            }

            // Write the current character to the compressed array.
            chars[write] = current_char;
            write++;

            // If the count is greater than 1, write the count as characters to the compressed array.
            if (count > 1) {
                string count_str = to_string(count);
                for (char digit : count_str) {
                    chars[write] = digit;
                    write++;
                }
            }
        }

        // Return the length of the compressed array.
        return write;
    }
};
