/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
          vector<int> ans;
        inOrderHelper(root, ans); // Helper function to do the traversal
        return ans;
    }

private:
    // Helper function to perform the in-order traversal and store it in ans
    void inOrderHelper(Node* root, vector<int>& ans) {
        if (root == NULL) {
            return;  // Simply return without any value
        }
        inOrderHelper(root->left, ans); // Visit left subtree
        ans.push_back(root->data);      // Visit root
        inOrderHelper(root->right, ans); // Visit right subtree
    }
};
