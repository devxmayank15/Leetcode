class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<int> temp = score;

        sort(temp.begin(), temp.end(), greater<int>());

        unordered_map<int,int> rank;

        for (int i = 0; i < temp.size(); i++)
            rank[temp[i]] = i + 1;

        vector<string> ans;

        for (int x : score) {

            if (rank[x] == 1)
                ans.push_back("Gold Medal");

            else if (rank[x] == 2)
                ans.push_back("Silver Medal");

            else if (rank[x] == 3)
                ans.push_back("Bronze Medal");

            else
                ans.push_back(to_string(rank[x]));
        }

        return ans;
    }
};