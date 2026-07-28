class Solution {
public:
    bool isPalindrome(int x) {
        
        int original=x;
        long long res=0;
        while(x>0)                        // eg =1331;
        {
            int digit = x%10;           // 1            3           3           1
            res= res*10+digit;          //res=1         // 13       133     1331
            x=x/10;                      //x=133    // x=13    x= 1           x=0
        }
        if(original == res)
            return true;
        return false;


    }
};