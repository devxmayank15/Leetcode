class Solution {
public:
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        vector<int> prefixgcd;
        for (int i=0;i<n;i++)
        {
            mx=max(mx,nums[i]);
            prefixgcd.push_back(gcd(nums[i],mx));
        }
        
        sort(prefixgcd.begin(), prefixgcd.end());
        int l=0, r=n-1; long long sum=0;

        while(l<r)
        {
            sum=sum+ gcd(prefixgcd[l++], prefixgcd[r--]);
            
        }
        return sum;
    }
};