#include"header4.h"
int main()
{
    Btree G1=create_Btree(1,NULL,NULL);
    Btree G2=create_Btree(4,NULL,NULL);
    Btree G3=create_Btree(7,NULL,NULL);
    Btree G4=create_Btree(6,G2,G3);
    Btree G=create_Btree(3,G1,G4);
    Btree D1=create_Btree(13,NULL,NULL);
    Btree D2=create_Btree(14,D1,NULL);
    Btree D=create_Btree(10,NULL,D2);
    Btree T=create_Btree(8,G,D);
    int d,s,p;
    p=tree_diameter(T);
    d=tree_depth(T);
    s=leaf_sum(T);
    printf("%d\n%d\n%d\n",d,s,p);
    return 0;

}
