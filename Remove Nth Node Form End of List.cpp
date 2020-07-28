class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first=head;
        ListNode* second=head;
        for(int i=0;i<n;i++){
            if(second->next==NULL){
                if(i==n-1)
                    head=head->next;
                return head;
            }
            second=second->next;                
        }
        while(second->next!=NULL){
            first=first->next;
            second=second->next;
        }
        first->next=first->next->next;  
        return head;
    }
};
