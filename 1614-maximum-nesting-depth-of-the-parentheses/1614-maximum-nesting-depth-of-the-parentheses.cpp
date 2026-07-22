class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        stack<int> st;
        int count=0;
        int ans=0;
        for (char ch:s){
        if(ch=='('){
                st.push(ch);
                count++;
        }
        else if(ch==')'){
            st.pop();
            count --;
        }
        ans = max(ans, count);
        }
        return ans;

    }
};