

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
    Node* curr = root;

    while (curr) {
        if (curr->right == NULL) {
            ans.push_back(curr->data);
            curr = curr->left;
        } else {
            Node* pred = curr->right;
            while (pred->left && pred->left != curr) {
                pred = pred->left;
            }
            
            if (pred->left == NULL) {
                pred->left = curr;
                ans.push_back(curr->data);
                curr = curr->right;
            } else {
                pred->left = NULL;
                curr = curr->left;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
