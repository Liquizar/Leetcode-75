class Solution {
public:
    // Function to find the pivot index in an array.
    // Parameters:
    //   - nums: A vector of integers representing the input array.
    // Returns:
    //   - The index of the pivot if exists, -1 otherwise.
    int pivotIndex(vector<int>& nums) {
        // Calculate the sum of all elements in the array.
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;

        // Iterate through the array to find the pivot index.
        for (int i = 0; i < nums.size(); i++) {
            // Update the right sum by subtracting the current element.
            rightSum -= nums[i];

            // Check if the left sum equals the right sum at the current position.
            if (leftSum == rightSum)
                return i;

            // Update the left sum by adding the current element.
            leftSum += nums[i];
        }

        // No pivot index found.
        return -1;
    }
};
