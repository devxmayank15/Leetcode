/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        unordered_map<ListNode*, bool> visited;

        while (head) {

            if (visited.find(head) != visited.end())
                return head;

            visited[head] = true;
            head = head->next;
        }

        return NULL;
    }
};