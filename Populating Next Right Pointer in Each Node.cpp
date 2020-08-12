class Solution{
public:
	Node* connect(Node* root){
		if(!root)
			return NULL;
		Node* temp = root;
		while(temp->left){
			Node* p = temp;
			while(p){
				p->left->next = p->right;
				if(p->next)
					p->right->next = p->next->left;
				p = p->next;
			}
		}
		return root;
	}
};
	
