class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        int l = 0, r = n - 1;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            if (nums[mid] == target) {

                int first = mid;
                int last = mid;

                while (first > 0 && nums[first - 1] == target)
                    first--;

                while (last < n - 1 && nums[last + 1] == target)
                    last++;

                return {first, last};
            }

            else if (nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }

        return {-1, -1};
    }
};