#include <stdio.h>
#include <stdlib.h>

/*
 * I got lazy and didnt write any tests
 * or the struct
 * or actually anything at all lol good luck
 */

typedef struct _tree{
    int value;
    struct _tree * left;
    struct _tree * right;
}*Treelink;

Treelink minValue(Treelink root){
    if(!root) return NULL;
    Treelink curr = root;
    while(curr->left!=NULL) curr = curr->left;
    return curr;
}

/*
    Write a function that finds the inorder successor of a given number.
    You can assume that the number exists in the tree.
    Return the pointer to the treenode. 
*/
Treelink inorderSucc(Treelink root, int num){
    if(!root) return NULL;
    Treelink curr, parent = NULL;
    curr = root;

    while(curr!=NULL && curr->value != num){
        if(curr->value > num) {
            // go left
            parent = curr;
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }

    if(!curr) return NULL;

    return curr->right != NULL ? minValue(curr->right)  : parent;
}

Treelink newTree(int n){
    Treelink t = malloc(sizeof(struct _tree));
    t->value = n;
    t->left = t->right = NULL;
    return t;
}

/* ignores duplicates lol */
Treelink insert(Treelink root, int num){
    if(!root) return newTree(num);
    if(root->value < num){
        root->right = insert(root->right, num);
    }
    if(root->value > num){
        root->left = insert(root->left, num);
    }
    return root;
}

int main(){
    Treelink t = NULL;
    t = insert(t, 20);
    t = insert(t, 3);
    t = insert(t, 14);
    t = insert(t, 6);
    t = insert(t, 9);
    t = insert(t, 5);
    t = insert(t, 200);
    t = insert(t, 23);
    
    Treelink s = inorderSucc(t, 9);
    if(!s) return 1;
    printf("%d\n", s->value);
    return 0;
}