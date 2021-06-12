#ifndef tp4ex1_h
#define tp4ex1_h

#include<stdio.h>
#include<stdlib.h>

struct Bnode
{
    int data;
    struct Bnode * left;
    struct Bnode * right;

};
typedef struct Bnode Bnode;
typedef struct Bnode * Btree;

#define N 100
struct Btree_stack
{
    Btree top_stack[N];
    unsigned lenght;
} ;
typedef struct Btree_stack Bstack;

// prototypes//

Btree create_Btree(int , Btree ,Btree );
void push_Btree_stack(Btree , Bstack *);
Btree pop_Btree_stack(Bstack *);
int max(int ,int );
int tree_depth(Btree );
int tree_diameter(Btree );
int leaf_sum(Btree );
void iterative_insert(Btree , int );
int recursive_searching(Btree , int );
int max_depth(Btree );
int tree_size(Btree);




#endif
