class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //1.use hasmap
        //2. use an array of size 0 to 26 and insert at the index;
        //3.sorting
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s==t)
            return true;
        else
            return false;
    }
};