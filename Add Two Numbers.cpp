Class Solution{
public:
  ListNode* addTwoNumber(ListNode* l1, ListNode* l2){
    ListNode* res = new ListNode(0);
    int x, carry=0;
    res->val = x%10;
    x=l1->val + l2->val +carry;
    carry = x/10;
    ListNode* temp =res;
    l1=l1->next;
    l2=l2->next;
    while(l1!=NULL || l2!=NULL){
       if(l1==NULL)
          x=l2->val + carry;
       else if(l2==NULL)
          x=l1->val + carry;
       else
          x= l1->val + l2->val +carry;
       temp->next = new ListNode(x%10);
       carry = x/10;
       temp=temp->next;
       if(l1)
        l1=l1->next;
       if(l2)
        l2=l2->next;
    }
    if(carry){
      temp->next = new ListNode(carry);
    }
    return res;
  }
};
       
      
