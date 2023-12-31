class Solution {
public:
    // Function to calculate the maximum area between two lines in a histogram.
    // Parameters:
    //   - height: A vector of integers representing the heights of the histogram bars.
    // Returns:
    //   - The maximum area between two lines in the histogram.
    int maxArea(vector<int>& height) {
        // Get the size of the input vector.
        int n = height.size();

        // Initialize variables for maximum water capacity and two pointers for the histogram.
        int maxWaterCapacity = 0;
        int start = 0;
        int end = n - 1;

        // Continue the iteration until the two pointers meet.
        while (start < end) {
            // Calculate the current water capacity between the two lines.
            int currentWaterCapacity = min(height[start], height[end]) * (end - start);

            // Update the maximum water capacity if the current capacity is greater.
            maxWaterCapacity = max(maxWaterCapacity, currentWaterCapacity);

            // Move the pointer with the smaller height towards the center.
            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }

        // Return the maximum water capacity between two lines in the histogram.
        return maxWaterCapacity;
    }
};
