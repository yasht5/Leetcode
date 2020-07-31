class Solution{
public:
	ListNode* swapPairs(ListNode* head){
		if(head==NULL || head_>next ==NULL)
			return head;
			
		ListNode* remain = head->next->next;
		LisTnode* newh = head->next;
		head->next->next = head;
		head->next = swapPairs(remain);
		return newh;
	}
};
			
