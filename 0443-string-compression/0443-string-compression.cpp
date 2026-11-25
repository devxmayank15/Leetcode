class Solution {
public:
    int compress(vector<char>& chars) {

        int k = 0;
        int i = 0;
        while (i < chars.size())

        {
            int count = 0;
            char ch = chars[i];

            while (i < chars.size() && chars[i] == ch) {
                i++;
                count++;
            }
            chars[k++] = ch;

            if (count > 1) {
                string num = to_string(count);
                for (char c : num)
                    chars[k++] = c;
            }
        }
        return k;
    }
};