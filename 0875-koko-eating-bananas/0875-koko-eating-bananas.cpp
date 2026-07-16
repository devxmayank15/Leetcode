class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=piles[0];
        for (int x: piles)
            high = max(high,x);
        
          while(low<high){
            int mid= low+(high-low)/2;
            int hours=0;
            for (int y: piles)
                hours += ceil((double)y/mid);
            
            if (hours <=h)
                high=mid;
            else
                low=mid+1;

        }
            return low;
        
    }
};