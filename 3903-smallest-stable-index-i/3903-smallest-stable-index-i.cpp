class Solution {
public:
    int findMin(vector<int> nums, int st, int end) {
        int mini = INT_MAX;
        for (int i = st; i < end; i++) 
            mini = min(mini, nums[i]);        
        return mini;
    }
    int findMax(vector<int> nums, int st, int end) {
        int maxi = INT_MIN;
        for (int i = st; i <= end; i++) 
            maxi = max(maxi, nums[i]);        
        return maxi;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) 
        {
            int maxval = findMax(nums, 0, i);
            int minval = findMin(nums, i, nums.size());
            ans[i] = maxval - minval;
        }
        for (int i = 0; i < ans.size(); i++) 
        {
            if (ans[i] <= k) 
                return i;            
        }
        return -1;
    }
};