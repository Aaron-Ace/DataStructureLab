#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct TreeNode
{
    struct TreeNode* left;
    struct TreeNode* right;
    char  elem;
};


TreeNode* BinaryTreeFromOrderings(char* inorder, char* preorder, int length)
{
    if(length == 0)
    {
        return NULL;
    }
    TreeNode* node = new TreeNode;//Noice that [new] should be written out.
    node->elem = *preorder;
    int rootIndex = 0;
    for(;rootIndex < length; rootIndex++)//a variation of the loop
    {
        if(inorder[rootIndex] == *preorder)
            break;
    }
    node->left = BinaryTreeFromOrderings(inorder, preorder +1, rootIndex);
    node->right = BinaryTreeFromOrderings(inorder + rootIndex + 1, preorder + rootIndex + 1, length - (rootIndex + 1));
    cout<<node->elem;
    return node;
}

int main(int argc, char** argv)
{
    //char* pr="GDAFEMHZ";
    //char* in="ADEFGHMZ";

    string str;
    cin>>str;
    char* pr=strdup(str.c_str());
    cin>>str;
    char* in=strdup(str.c_str());
    BinaryTreeFromOrderings(in, pr, strlen(pr));
    cout<<endl;
    return 0;
}