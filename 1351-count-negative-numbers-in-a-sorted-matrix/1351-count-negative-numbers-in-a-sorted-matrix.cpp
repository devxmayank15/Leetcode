class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;


        int cols= grid[0].size();
        int rows=grid.size();

        for(int i= rows-1 ; i>=0;i--)
        {

            for(int j=cols-1;j>=0;j--)
            {
                if(grid[i][j] >=0)
                    break;
                count++;
            }
            

        }
        return count;


    }
};