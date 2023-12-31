class Solution {
public:
    // Function to calculate the GCD of two strings.
    // Parameters:
    //   - str1: The first input string.
    //   - str2: The second input string.
    // Returns:
    //   - The GCD of the two input strings, or an empty string if no GCD exists.
    string gcdOfStrings(string str1, string str2) {
        // Ensure that str1 is longer than or equal to str2 for simplicity.
        if (str1.length() < str2.length())
            return gcdOfStrings(str2, str1);
        // Check if str2 is a prefix of str1.
        else if (str1.find(str2) != 0)
            return "";
        // Check if str2 is an empty string, in which case, str1 is the GCD.
        else if (str2 == "")
            return str1;
        // Recursively calculate the GCD by removing common prefixes from str1.
        else 
            return gcdOfStrings(str1.substr(str2.length()), str2);
    }
};
