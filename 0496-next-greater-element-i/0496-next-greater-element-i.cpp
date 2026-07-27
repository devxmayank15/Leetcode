class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int x : nums1) {
            int index;
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == x) {
                    index = i;
                    break;
                }
            }

            bool found = false;
            for (int j = index + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[index]) {
                    ans.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }

            if (!found)
                ans.push_back(-1);
        }

        return ans;
    }
};