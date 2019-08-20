#include <iostream>
#include <cctype>
#include <string>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

int sum(TreeNode *n) {
    if (n == NULL) return 0;
    else return n->data + sum(n->left) + sum(n->right);
}

int main(int argc, char *argv[])
{
    TreeNode five = {5, NULL, NULL};
    TreeNode four = {4, NULL, NULL};
    TreeNode eight1 = {8, NULL, NULL};
    TreeNode sixteen = {16, NULL, NULL};
    TreeNode two = {2, NULL, NULL};
    TreeNode seven = {7, NULL, NULL};
    TreeNode eight2 = {8, NULL, NULL};
    TreeNode nine = {9, NULL, NULL};

    five.left = &four;
    five.right = &eight1;
    four.left = &sixteen;
    four.right = &two;
    eight1.left = &seven;
    eight1.right = &eight2;
    eight2.left = &nine;

    cout << sum(&five) << endl;

    return 0;
}