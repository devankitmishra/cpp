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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios::sync_with_stdio(0);
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;

        int carry = 0; // Set default carry

        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry; // Initialize sum with carry

            if (l1 != nullptr) { // Use number from first list
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) { // Use number from second list
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // Get sum and carry
            sum = sum % 10;
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
        }

        if (carry > 0) ptr->next = new ListNode(carry); // If there's a carry left, add a new node

        return ans->next; // The first node is a placeholder, so we return ans->next
    }
};