class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();

        vector<vector<int>> answer;

        int total= pow(2,n); // total no. of subsets
        for (int mask=0; mask < total; mask++)
        {
            vector<int> subset;
            for (int bit=0; bit < n; bit++){

                if (mask & (1<<bit))
                    subset.push_back(nums[bit]);
            }
            answer.push_back(subset);
        }
return answer;




    }
};