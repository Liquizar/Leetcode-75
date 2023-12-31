class Solution {
public:
    // Function to check if there exists an increasing triplet subsequence in the array.
    // Parameters:
    //   - nums: A vector of integers representing the input array.
    // Returns:
    //   - True if there exists an increasing triplet subsequence, false otherwise.
    bool increasingTriplet(vector<int>& nums) {
        // Initialize two variables to store the first and second minimum elements.
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        // Iterate through the array to find an increasing triplet subsequence.
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is less than or equal to the first minimum, update the first minimum.
            if (nums[i] <= firstMin)
                firstMin = nums[i];
            // If the current element is less than or equal to the second minimum, update the second minimum.
            else if (nums[i] <= secondMin)
                secondMin = nums[i];
            // If the current element is greater than both the first and second minimum, an increasing triplet is found.
            else
                return true;
        }

        // No increasing triplet subsequence was found.
        return false;
    }
};
