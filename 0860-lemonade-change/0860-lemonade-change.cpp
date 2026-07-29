class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0,twenty=0;
        unordered_map<int, int> mp;


        for (int x:bills){

            if(x==5)    mp[x]++;

            else if(x==10)
            {
                mp[x]++;
                if(mp[5] >0)
                    mp[5]--;
                else
                    return false;
            }
            else //$20
            {
                mp[x]++;
                if(mp[5] > 0 )
                {
                    if(mp[10] > 0){
                         mp[10]--;
                         mp[5]--;
                    }
                    else if(mp[5] >=3)
                        mp[5]=mp[5]-3;
                    else
                        return false;
                }
                else
                    return false;
                
            }
        }
        return true;
    }
};