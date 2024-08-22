class Solution {
public:
    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head -> next;
        }
        return len;// got the length
    }


    ListNode* deleteMiddle(ListNode* head) {


        //speed booster code-------------
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        //speed booster code-------------

        
        if (head == NULL || head->next == NULL) { // If there's no node or only one node, return NULL
            return NULL;
        }

        int len = getLength(head);
        int mid = (len/2);

        ListNode* curr = head;
        ListNode* prev = NULL;

        for (int i = 0; i < mid; i++) {
            prev = curr;
            curr = curr -> next;
        }

        if(prev != NULL){
        prev -> next = curr -> next;
        // curr -> next  = NULL;
        }

        delete curr;
        return head;
    }
};