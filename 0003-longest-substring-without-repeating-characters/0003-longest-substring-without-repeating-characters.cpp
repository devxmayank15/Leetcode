class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,0);
        int n = s.size();
        int answer = 0;
        int left=0;
        for (int right = 0; right < n; right++) {
            freq[s[right]]++;
            while(freq[s[right]] >1)
            {
                freq[s[left]]--;
                left++;
            }
            int len=right-left+1;
            answer=max(answer, len);   // right-left+1= length of window
         
        }

        return answer;
    }
};