class Solution {
public:
    int nextGreaterElement(int n) {
        
        vector<int> digits;
        int x=n;
        while(x)
        {
            digits.push_back(x%10);
            x=x/10;
        }

        reverse(digits.begin(), digits.end());

        int i= digits.size()-2;
        while(i>=0 && digits[i] >= digits[i+1] )
        {
            i--;
        }      
        if(i < 0) return -1;

        int j=digits.size()-1;
        while(digits[j] <= digits[i])
        {
            j--;
        }

        swap(digits[i], digits[j]);
        reverse(digits.begin() + i + 1, digits.end());

        long long ans = 0;

        for(int d : digits) 
            ans = ans * 10 + d;

        if(ans > INT_MAX) return -1;
        return ans;
        
        
    }
};