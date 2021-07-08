class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        if(!root) return NULL;
        Node* y=NULL;
        if(root->data <= x->data ){
        y=inOrderSuccessor(root->right,x);
        }
        else if(root->data > x->data){
        y=inOrderSuccessor(root->left,x);
        if(y==NULL)
        y=root;
        }
        return y;
    }
};