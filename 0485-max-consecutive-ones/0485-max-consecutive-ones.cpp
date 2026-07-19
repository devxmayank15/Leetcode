class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int maxCount = 0;

        for (int num : nums) {

            if (num == 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }

        // Handle case when array ends with 1s
        maxCount = max(maxCount, count);

        return maxCount;
    }
};