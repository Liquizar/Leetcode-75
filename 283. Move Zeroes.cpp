class Solution {
public:
    // Function to move all zeroes to the end of the array.
    // Parameters:
    //   - nums: A vector of integers representing the input array.
    void moveZeroes(vector<int>& nums) {
        /*
        // Initial approach using erase to remove zeroes, but inefficient.
        int countOfZero = 0;
        for (int i = 0; i < nums.size(); i++) {
            auto deleteZero = find(nums.begin(), nums.end(), 0);

            if (deleteZero != nums.end()) {
                nums.erase(deleteZero);
                countOfZero++;
            }
        }
        */

        // Efficient approach to move all zeroes to the end of the array while maintaining order.
        int nonZeroIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is non-zero, move it to the appropriate position.
            if (nums[i] != 0) {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // Fill the remaining positions with zeroes.
        while (nonZeroIndex < nums.size()) {
            nums[nonZeroIndex] = 0;
            nonZeroIndex++;
        }
    }
};
