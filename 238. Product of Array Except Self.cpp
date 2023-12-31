class Solution {
public:
    // Function to calculate the product of all elements except the one at the current index.
    // Parameters:
    //   - nums: A vector of integers representing the input array.
    // Returns:
    //   - A vector of integers representing the product of all elements except the one at the current index.
    vector<int> productExceptSelf(vector<int>& nums) {
        // Get the size of the input array.
        int n = nums.size();
        
        // Initialize a vector to store the result, initially set to 1 for all elements.
        vector<int> result(n, 1);

        // Initialize variables for prefix and suffix product calculations.
        int prefix = 1;
        int suffix = 1;

        // Calculate the prefix products and update the result vector.
        for (int i = 0; i < n; i++) {
            result[i] *= prefix;
            prefix *= nums[i];
        }

        // Reset the prefix variable for suffix product calculation.
        prefix = 1;

        // Calculate the suffix products and update the result vector.
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        // Return the vector representing the product of all elements except the one at the current index.
        return result;
    }
};
