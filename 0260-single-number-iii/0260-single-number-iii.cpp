class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorAll = 0;

        for (int x : nums)
            xorAll ^= x;

        int diff = 1;
        while ((xorAll & diff) == 0)
            diff <<= 1;

        int a = 0, b = 0;

        for (int x : nums) {
            if (x & diff)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};