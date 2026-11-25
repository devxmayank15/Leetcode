class Solution {
public:
    string removeOccurrences(string s, string part) {

        int n = s.length();
        int m = part.length();

        int i = 0;

        while (i < s.length()) {
            int j = 0;

            if (s[i] == part[j]) {
                int k = i;
                while (i < s.length() && j < m && s[i] == part[j])
                 {
                    i++;
                    j++;
                }
                if (j == m) {
                    s.erase(k, m);
                    i = 0;
                }

                else
                    i = k + 1;

            }

            else 
                i++;
            
        }
        return s;
    }
};
