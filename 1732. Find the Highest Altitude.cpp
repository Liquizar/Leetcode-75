class Solution {
public:
    // Function to find the largest altitude among a series of altitude gains.
    // Parameters:
    //   - gain: A vector of integers representing altitude gains.
    // Returns:
    //   - The largest altitude reached during the journey.
    int largestAltitude(vector<int>& gain) {
        /*
        // Initial approach using prefix sum and finding the maximum element.
        for (int i = 0; i < gain.size() - 1; i++) {
            gain[i + 1] = gain[i] + gain[i + 1];
        }
        int max_altitude = *max_element(gain.begin(), gain.end());

        if (max_altitude > 0)
            return max_altitude;
        else
            return 0;
        */

        // Efficient approach using a single pass with a prefix sum.
        int max_altitude = 0, prefix_sum = 0;

        for (auto it : gain) {
            // Update the prefix sum.
            prefix_sum += it;

            // Update the maximum altitude if the current prefix sum is greater.
            max_altitude = max(max_altitude, prefix_sum);
        }

        // Return the largest altitude reached during the journey.
        return max_altitude;
    }
};
