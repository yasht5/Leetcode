class Solution{
public:
	ListNode* reverseKGroup(ListNode* head, int k){
		ListNode* curr = head;
		int count=0;
		while(curr){
			count++;
			if(count==k)
				break;
			curr=curr->next;
		}
		
		if(count<k)
			return head;
		ListNode* next = reverseKGroup(curr->next, k);
		ListNode* prev=NULL, *now=head, *temp=NULL;
		for(int i=0;i<k;i++){
			temp=now->next;
			now->next=prev;
			prev=now;
			now=temp;
		}
		head->next = next;
		return prev;
	}
};
