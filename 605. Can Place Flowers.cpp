class Solution {
public:
    // Function to check if it's possible to place a given number of flowers in a flowerbed.
    // Parameters:
    //   - flowerbed: A vector representing the flowerbed, where 0 denotes an empty spot and 1 denotes a planted flower.
    //   - n: The number of flowers to be planted.
    // Returns:
    //   - True if it's possible to plant n flowers without violating adjacent placement rules, false otherwise.
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // If there are no flowers to be planted, it's always possible.
        if (n == 0)
            return true;
        
        // Iterate through the flowerbed to check for suitable spots to plant flowers.
        for (int i = 0; i < flowerbed.size(); i++) {
            // Check if the current spot is empty and satisfies the adjacent placement rules.
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                // Plant a flower at the current spot.
                flowerbed[i] = 1;
                // Decrease the number of remaining flowers to be planted.
                n--;
                // If all flowers are planted, return true.
                if (n == 0)
                    return true;
            }
        }
        
        // If the loop completes and there are still remaining flowers to be planted, return false.
        return false;
    }
};
