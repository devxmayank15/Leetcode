class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int bit = 0; bit < 32; bit++) {
            int count = 0;
            for (int x : nums) {
                x= x>>bit;
                if (x & 1)
                    count++;
            }
            if (count % 3 != 0)
                ans = ans | (1 << bit); // like in arm we used to shift 16 times, it adds the bit at the right position.
        }

        return ans;
    }
};


// else we can use bit mask concept , arm concept , n & (1<<bit)
