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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> seen;
        while(head != nullptr){
            if(seen.insert(head).second == 0) return true;
            head = head -> next;
        }

        return false;
    }
};