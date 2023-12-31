// This class represents a solution for determining which kids can have the maximum number of candies after receiving extra candies.
class Solution {
public:
    // Function to determine if each kid can have the maximum number of candies after receiving extra candies.
    // Parameters:
    //   - candies: A vector representing the initial number of candies each kid has.
    //   - extraCandies: The additional number of candies each kid receives.
    // Returns:
    //   - A vector of boolean values indicating whether each kid can have the maximum number of candies.
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Get the number of kids.
        int n = candies.size();
        
        // Initialize a vector to store the result, initially set to false for all kids.
        vector<bool> result(n, false);
        
        // Find the maximum number of candies among all kids.
        int maximum = *max_element(candies.begin(), candies.end());
        
        // Iterate through each kid and check if they can have the maximum number of candies after receiving extra candies.
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maximum) 
                result[i] = true;
        }

        // Return the vector indicating which kids can have the maximum number of candies.
        return result;
    }
};
