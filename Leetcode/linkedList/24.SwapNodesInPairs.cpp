/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;

        while (head != NULL && head->next != NULL) {
            ListNode* curr = head->next->next;
            ListNode* neck = head->next;

            temp->next = neck;
            neck->next = head;

            temp = head;
            head = curr;
        }

        temp->next = head;// as head is NULL so we r pointing the last node to null
        return dummy->next;


    }
};