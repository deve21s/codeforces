#include<bits/stdc++.h>
using namespace std;

    struct tree
    {
        int data;
        struct tree* left;
        struct tree* right;

        tree(int d){
            data = d;
            left = NULL;
            right = NULL;       
        }
    };
    
    void print(struct tree* node){
        if(node == NULL)
            return;
        
        print(node->left);
        cout <<node->data << " ";
        print(node->right);
    }
    

int main(){
    struct tree * root = new tree(1);
    root->left = new tree(2);
    root-> right = new tree(3);
    print(root);
    return 0;
}
