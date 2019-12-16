#include<iostream>
using namespace std;
struct node {
   int data;
   struct node *left;
   struct node *right;
};
struct node *createNode(int val) {
   struct node *temp =  (struct node *)malloc(sizeof(struct node));
   temp->data = val;
   temp->left = temp->right = NULL;
   return temp;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void postorder(struct node *root) {
   if (root != NULL) {
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<" ";
   }
}
struct node* insertNode(struct node* node, int val) {
   if (node == NULL) return createNode(val);
   if (val < node->data)
      node->left  = insertNode(node->left, val);
   else if (val > node->data)
      node->right = insertNode(node->right, val);
   return node;
}
int main() {
   struct node *root = NULL;
   int Input;
   int NumOfInput;
   while(cin>>NumOfInput)
   {
       for (int i = 0; i < NumOfInput; i++)
       {
           cin >> Input;
           if (i == 0) { root = insertNode(root, Input); }
           else { insertNode(root, Input); }
       }
       inorder(root);
       cout<<endl;
       postorder(root);
       cout<<endl;
   }


   return 0;
}