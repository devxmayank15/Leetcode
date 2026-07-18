class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length();
        string ans;
        int j = n - 1;
        while (j >= 0) {
            while (j >= 0 && s[j] == ' ')
                j--;
            // if (j < 0)
            //     break;
            int i = j;
            while (j >= 0 && s[j] != ' ')
                j--;
            if (!ans.empty())
                ans += ' ';
            ans += s.substr(j + 1, i - j);
        }

        if (ans[ans.length()-1] == ' ')
            ans = ans.substr(0, ans.length()-1);
        return ans;
    }
};