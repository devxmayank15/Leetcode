class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();

        
        for(int i=0; i<n-2;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;

            int left= i+1;
            int right=n-1;

            if(nums[i] > 0)
                return ans;  //or break;

            int currsum=0;
           

            while(left< right)
            {
                currsum = nums[i]+nums[left]+ nums[right];

                if(currsum == 0)
                {
                    ans.push_back({nums[i], nums[left] , nums[right]});
                    left++;
                    right--;
                    

                    while(left < right && nums[left]==nums[left-1])
                        left++;

                    while(left < right && nums[right]==nums[right+1])
                        right--;


                }
                else if(currsum > 0)
                    right--;

                else
                    left++;
            }
        }

        
       return ans;
    }
};