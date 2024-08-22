/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x, next(nullptr)) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        if(head == NULL) {
            return NULL;
        }

        // Check if there are at least k nodes left in the list
        ListNode* node = head;
        int count = 0;
        while (node != NULL && count < k) {
            node = node->next;
            count++;
        }

        // If we have k nodes, then we reverse them
        if(count == k) {
            ListNode* next = NULL;
            ListNode* curr = head;
            ListNode* prev = NULL;
            count = 0;

            // Reverse k nodes
            while(curr != NULL && count < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }

            // next is now a pointer to (k+1)th node
            // recursively call for the list starting from current.
            // and make rest of the list as next of first node
            if(next != NULL) {
                head->next = reverseKGroup(next, k);
            }

            // prev is now head of input list
            return prev;
        } else {
            // If we've fewer than k nodes, we just return the head as is
            return head;
        }
    }
};
