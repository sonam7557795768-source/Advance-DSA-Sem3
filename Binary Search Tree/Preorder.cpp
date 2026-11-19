// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     char data;
//     node* left;
//     node* right;
// };
// node* MakeNode(char x){
//      node* p;
//      p=new node;
//      p->data=x;
//     p->left=NULL;
//     p->right=NULL;
//     return p;
// }
// void PreOrder(node* T){
//     if(T!=NULL){
//         cout<<T->data<<",  ";
//         PreOrder(T->left);
//         PreOrder(T->right);
//     }
// }
// void InOrder(node* T){
//     if(T!=NULL){
//         InOrder(T->left);
//         cout<<T->data<<",  ";
//         InOrder(T->right);
//     }
// }
// void PostOrder(node* T){
//     if(T!=NULL){
//         PostOrder(T->left);
//         PostOrder(T->right);
//         cout<<T->data<<",  ";
//     }
// }
// int CountNode(node *T){
//     if(T==NULL)
//     return 0;
//     else{
//         return 1+ CountNode(T->left)+CountNode(T->right);
//     }
// }
// int CountLeaf(node *T){
//     if(T==NULL)
//     return 0;
//     if(T->left==NULL )
// }
// int main(){
//     node* root=NULL;
//     root=MakeNode('C');
//     root->left=MakeNode('X');
//     root->right=MakeNode('Y');
//     root->left->left=MakeNode('T');
//     root->right->left=MakeNode('M');

//     root->right->right= MakeNode('N');
//     cout<<"\n pre-order Traversal is:=>";
//     PreOrder(root);
//     cout<<"\n In-order Traversal is:=>";
//     InOrder(root);
//     cout<<"\n PostOrder Traversal is:=>";
//     PostOrder(root);
//     cout<<"\n CountNodes are:=>";
//     CountNode(root);


// }



//  #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node* left;
//     node* right;
// };
// node* MakeNode(int x){
//      node* p;
//      p=new node;
//      p->data=x;
//     p->left=NULL;
//     p->right=NULL;
//     return p;
// }
// void PreOrder(node* T){
//     if(T!=NULL){
//         cout<<T->data<<",  ";
//         PreOrder(T->left);
//         PreOrder(T->right);
//     }
// }
// void InOrder(node* T){
//     if(T!=NULL){
//         InOrder(T->left);
//         cout<<T->data<<",  ";
//         InOrder(T->right);
//     }
// }
// void PostOrder(node* T){
//     if(T!=NULL){
//         PostOrder(T->left);
//         PostOrder(T->right);
//         cout<<T->data<<",  ";
//     }
// }
// void createTree(node *T){
//     int choice;
//     cout<<"Whether left of "<<T->data<<"exists? (1/0)";
//     cin>>choice;
//     if(choice==1){
//         int x;
//         cout<<"Input the data of left node ";
//         cin>>x;
//         node *p=MakeNode(x);
//         T->left=p;
//         createTree(p);

//     }

//     cout<<"Whether right of "<<T->data<<"exists? (1/0)";
//     cin>>choice;
//     if(choice==1){
//         int x;
//         cout<<"Input the data of right node ";
//         cin>>x;
//         node *p=MakeNode(x);
//         T->right=p;
//         createTree(p);

//     }
// }
// int CountNode(node *T){
//     if(T==NULL)
//     return 0;
//     else{
//         return 1+ CountNode(T->left)+CountNode(T->right);
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter the root node data ";
//     cin>>x;
//     node* root = MakeNode(x);
//     createTree(root);
//     cout<<CountNode(root);

//     cout<<"\n pre-order Traversal is:=>";
//     PreOrder(root);
//     cout<<"\n In-order Traversal is:=>";
//     InOrder(root);
//     cout<<"\n PostOrder Traversal is:=>"<<endl;
//     PostOrder(root);


// }


