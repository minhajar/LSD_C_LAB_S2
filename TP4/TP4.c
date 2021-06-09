#include"TP4.h"

Btree create_Btree(int x, Btree A,Btree B)
{
    Btree C=(Btree)malloc(sizeof(Bnode));
    C->data=x;
    C->left=A;
    C->right=B;
    return C;
    
} 

int max(int x,int y)
{
    if(x>y)
        return x;
    return y;
}


int tree_depth(Btree A)
{
    if(A==NULL)
        return -1;
    if( A->left == NULL || A->right == NULL )
        return 0;
    return 1 + max(tree_depth(A->left),tree_depth(A->right));



}

int tree_diameter(Btree T)
{
    // if the longest path passes the root we return tree_depth(T->left) + tree_depth(T->right) + 2;
    
    if (T==NULL)
        return 0;
    int Ldepth= tree_diameter(T->left);
    int Rdepth= tree_diameter(T->right);
    return  max( max(Ldepth,Rdepth) , tree_depth(T->left)+tree_depth(T->right)+2);
    

}
int leaf_sum(Btree T)

{
    if(T==NULL)
        return 0;
    if (T->left==NULL && T->right==NULL)
        return T->data;
    return leaf_sum(T->left)+ leaf_sum(T->right); 


}
