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

// prototypes//

Btree create_Btree(int , Btree ,Btree );
int max(int ,int );
int tree_depth(Btree );
int tree_diameter(Btree );
int leaf_sum(Btree );


#endif
