class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        string ans="";
        while(temp){
            ans+= temp->val;
            temp=temp->next;
        }
        if(isPalindrome(ans))
            return true;
        return false;

}

// else we can find middle and reverse it ill middle and compare the both half parts




bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}
};