class Solution{
public:
	ListNode* mergeTwoLists(ListNOde* l1, ListNode* l2){
		ListNode* head=NULL;
		ListNode* t1=l1;
		ListNode* t1=l2;
		if(t1==NULL){
			head=t2;
			return head;
		}
		if(t2==NULL){
			head=t1;
			return head;
		}
		if(t1->val <= t2->val){
			head=t1;
			t1=t1->next;
			head->next=NULL;
		}
		else{
			head=t2;
			t2=t2->next;
			head->next=NULL;
		}
		ListNode* temp =head;
		while(t1!=NULL && t2!=NULL){
			if(t1->val <= t2->val){
				temp->next=t1;
				t1=t1->next;
				temp=temp->next;
				temp->next=NULL;
			}
			else{
				temp->next=t2;
				t2=t2->next;
				temp=temp->next;
				temp->next=NULL;
			}
		}
		if(t1==NULL && t2!=NULL){
			temp->next=t2;
			return head;
		}
		else if(t2==NULL && t1!=NULL){
			temp->next=t1;
			return head;
		}
		else
			return head;
	}
};
