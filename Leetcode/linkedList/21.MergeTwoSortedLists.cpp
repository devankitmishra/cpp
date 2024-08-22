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

    void solve(ListNode* first, ListNode* second){

        ListNode* curr1 = first;
        ListNode* next1 = curr1 -> next;

        ListNode* curr2 = second;
        ListNode* next2 = curr2 -> next;

        while(next1 != NULL && curr2 != NULL){
            if( (curr2 -> val >= curr1 -> val ) && ( curr2 -> val <= next1 -> val)) 
            {

                curr1 -> next = curr2;
                curr2 -> next = next1;

                curr1 = curr2;
                curr2 = next2;

                if(next2 != NULL){
                    next2 = next2 -> next;
                }
            }
            else
            {
                curr1 = curr1 -> next;
                next1 = next1 -> next;
                if(next1 == NULL){
                    curr1 -> next = curr2;
                    break;
                }
            }
        }
        if(curr2 != NULL){
            curr1 -> next = curr2;
        }
    }


    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        if(first == NULL) return second;
        if(second == NULL) return first;

        if(first -> val <= second -> val){
            solve(first, second);
            return first;
        } else {
            solve(second, first);
            return second;
        }
    }
};



//approach 2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        // Create a sentinel/dummy node to start
        ListNode* returnNode = new ListNode(INT_MIN);

        // Create a copy of this node to iterate while solving the problem
        ListNode* headNode = returnNode;

        // Traverse till one of the lists reaches the end
        while (first != NULL && second != NULL) {
            // Compare the 2 values of lists
            if (first->val <= second->val) {
                returnNode->next = first;
                first = first->next;
            } else {
                returnNode->next = second;
                second = second->next;
            }
            returnNode = returnNode->next;
        }

        // Append the remaining list
        if (first == NULL) {
            returnNode->next = second;
        } else {
            returnNode->next = first;
        }

        // Return the next node to sentinel node
        ListNode* result = headNode->next;
        delete headNode;  // Free the sentinel node
        return result;
    }
};
