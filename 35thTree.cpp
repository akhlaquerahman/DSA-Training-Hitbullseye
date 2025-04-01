#include <iostream>
#include <vector>
using namespace std;

// TreeNode structure for a binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to create a simple tree
TreeNode* createSampleTree() {
    /* Creates this tree:
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

// Pre-order traversal (Root -> Left -> Right)
void preOrder(TreeNode* node) {
    if (node == nullptr) return;
    cout << node->val << " ";
    preOrder(node->left);
    preOrder(node->right);
}

int main() {
    TreeNode* root = createSampleTree();
    
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;
    
    // Clean up memory (simple recursive deletion)
    // In a real program, you'd want a proper destructor
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;
    
    return 0;
}