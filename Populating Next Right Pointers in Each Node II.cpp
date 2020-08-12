class Solution{
public:
	Node* connect(Node* root){
		if(!root)
			return NULL;
		Node* prev = NULL;
		Node* head = NULL;
		Node* curr = root;
		while(curr){
			while(curr){
				if(curr->left){
					if(prev){
						prev->next = curr->left;
					}
					else{
						head = curr->left;
					}
					prev = curr->left;
				}
				if(curr->right){
					if(prev){
						prev->next = curr->right;
					}
					else{
						head = curr->right;
					}
					prev = curr->right;
				}
				curr = curr->next;
			}
			curr = head;
			head = NULL;
			prev = NULL;
		}
		return root;
	}
};
