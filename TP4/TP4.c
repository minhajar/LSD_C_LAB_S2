#include"TP4.h"
//exercice 1
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
//exercice 2

void recursive_display_Inorder( Btree T)
{
    if(T==NULL)
       return;
    
    recursive_display_Inorder(T->left);
    printf("%d\n",T->data);
    recursive_display_Inorder(T->right);
    
}
void iterative_display_Inorder(Btree T)
{
    if (T==NULL)
        return;
    Bstack  A={NULL,0};
    Btree tmp = T;
    while(tmp!=NULL || A.lenght!=N){

        if(tmp!=NULL){
            push_Btree_stack(tmp , &A);
            printf("%d    ",tmp->data);
            tmp=tmp->left;
        }
        else{
            tmp=pop_Btree_stack(&A);
            printf("%d    ",tmp->data);
            tmp=tmp->right;
        }
    }
    return;
    
}





void iterative_insert(Btree T, int x)
{
    Btree X =create_Btree(x,NULL,NULL);
    if (T==NULL)
        T=X ;
    
    /*if (Btree_depth(T)==0)
    {
        if (x > T->data)
            T->right = X;
        T->left = X ;
    }*/
    else
    {
        Btree tmp=T;
        Btree tmp1=T;
        while (tmp!=NULL)
        {
            tmp1=tmp;
            if (x == tmp->data)
                return;
            if (x < tmp->data)
                tmp = tmp->left;
            else
                tmp = tmp->right;
        }
        if (x == tmp->data)
                return;
        if (x < tmp->data)
            tmp1->left=X;
        else
            tmp1->right=X;
         
    }


}

int recursive_searching(Btree T, int x)
{
    if(T==NULL)
        return 0;
    if(x==T->data)
        return 1;
    if(x<T->data)
        return recursive_searching(T->left,x);
    if(x>T->data)
        return recursive_searching(T->right,x);
    
}
int max_depth(Btree T){
    return tree_depth(T);
}


