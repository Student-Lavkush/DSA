#include<iostream>
struct Node{
int data;
struct Node *left,*right;
};

struct Node *createnode(int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right=NULL;
    return newNode;
    

}
int main(){
    struct Node* root = createnode(1);
    root->left = createnode(31);
    root->

}