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
    int pairSum(ListNode* head) {

        ios_base::sync_with_stdio(false);

        stack<int> stack;
        int sum = 0;
        int maxTsum = INT_MIN;
        ListNode* ptr = head;

        while(ptr != NULL){
            stack.push(ptr->val);
            ptr = ptr->next;
        }

        for(int i = 0; i<stack.size(); i++){
            sum = stack.top() + head->val;
            maxTsum = max(sum,maxTsum);
            stack.pop();
            head = head->next;
        }

        return maxTsum;

    }
};