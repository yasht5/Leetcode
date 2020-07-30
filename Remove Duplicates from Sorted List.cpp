class Solution{
public:
	ListNode* deleteDuplicates(ListNode* head){
		ListNode* temp = head;
		while(temp!=NULL && temp->next!=NULL){
			if(tem->next->val == temp->val)
				temp->next = temp->next->next;
			else
				temp = temp->next;
		}
		
		return head;
	}
};
