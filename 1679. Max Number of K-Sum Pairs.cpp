class Solution {
public:
    // Speedup for faster I/O operations.
    int speedup = []{ios::sync_with_stdio(0) ; cin.tie(0) ; return 0 ; } ();

    // Function to find the maximum number of pairs with a specified sum in an array.
    // Parameters:
    //   - nums: A vector of integers representing the input array.
    //   - k: The target sum for pairs.
    // Returns:
    //   - The maximum number of pairs with the specified sum.
    int maxOperations(vector<int>& nums, int k) {
        // Initialize two pointers for the start and end of the array, and a variable to count pairs.
        int start = 0;
        int end = nums.size() - 1;
        int countOfMaxPairs = 0;

        // Sort the array to enable efficient pair finding.
        sort(nums.begin(), nums.end());

        // Iterate through the array until the pointers meet.
        while (start < end) {
            // If the sum of elements at the current pointers equals the target sum, increment the count and move the pointers.
            if (nums[start] + nums[end] == k) {
                countOfMaxPairs++;
                start++;
                end--;
            } 
            // If the sum is less than the target, move the start pointer to increase the sum.
            else if (nums[start] + nums[end] < k)
                start++;
            // If the sum is greater than the target, move the end pointer to decrease the sum.
            else
                end--;
        }

        // Return the maximum number of pairs with the specified sum.
        return countOfMaxPairs;
    }
};
