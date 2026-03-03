import java.util.*;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        int n = candies.length;

        // Step 1: Find max candy
        int max = candies[0];
        for (int i = 1; i < n; i++) {
            if (candies[i] > max) {
                max = candies[i];
            }
        }

        // Step 2: Compare each kid after adding extraCandies
        List<Boolean> result = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= max) {
                result.add(true);
            } else {
                result.add(false);
            }
        }

        return result;
    }
}