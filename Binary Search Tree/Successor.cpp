#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node* father;
};

node* MakeNode(int x) {
    node* R = new node;
    R->data = x;
    R->left = NULL;
    R->right = NULL;
    R->father=NULL;
    
    return R;
}
node* BSTInsert(node* T, int x) {
    node* R = MakeNode(x);

    if (T == NULL) {
        return R;
    }

    node* P = T;
    node* Q = NULL;

    while (P != NULL) {
        Q = P;

        if (x < P->data)
            P = P->left;
        else
            P = P->right;
    }
    if (x < Q->data)
        Q->left = R;
        Q->father=Q;
    else
        Q->right = R;
        R->father=Q;

    return T;
}

void Inorder(node* T) {
    if (T != NULL) {
        Inorder(T->left);
        cout << T->data << " ";
        Inorder(T->right);
    }
}

node* Minimum(node* T) {
    if (T == NULL)
        return NULL;

    while (T->left != NULL)
        T = T->left;

    cout << "Minimum value: " << T->data << endl;
    return T;
}

node* Maximum(node* T) {
    if (T == NULL)
        return NULL;

    while (T->right != NULL)
        T = T->right;

    cout << "Maximum value: " << T->data << endl;
    return T;
}

int main() {
    node* T = NULL;

    T = BSTInsert(T, 10);
    T = BSTInsert(T, 5);
    T = BSTInsert(T, 15);
    T = BSTInsert(T, 3);
    T = BSTInsert(T, 7);
    T = BSTInsert(T, 12);
    T = BSTInsert(T, 18);

    cout << "Inorder Traversal: ";
    Inorder(T);
    cout << endl;

    Minimum(T);
    Maximum(T);

    return 0;
}
