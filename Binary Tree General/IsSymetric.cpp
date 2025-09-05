#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool helper(TreeNode* l, TreeNode* r) {
        if (l == NULL && r == NULL) return true;
        if (l == NULL || r == NULL) return false;
        return (l->val == r->val) &&
               helper(l->left, r->right) &&
               helper(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return helper(root->left, root->right);
    }
};

int main() {
    // Build symmetric tree:      1
    //                          /   \
    //                         2     2
    //                        / \   / \
    //                       3  4  4  3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution s;
    if (s.isSymmetric(root)) {
        cout << "Tree is symmetric." << endl;
    } else {
        cout << "Tree is not symmetric." << endl;
    }

    return 0;
}
