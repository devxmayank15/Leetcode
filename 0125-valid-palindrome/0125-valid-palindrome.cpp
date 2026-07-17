class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";

        // Build a cleaned string
        for (char ch : s) {
            if (isalnum(ch)) {
                str += tolower(ch);
            }
        }

        int i = 0;
        int j = str.size() - 1;

        while (i < j) {
            if (str[i] != str[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};