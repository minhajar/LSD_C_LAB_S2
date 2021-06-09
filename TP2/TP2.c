#include"header2.h"

char** allocated_array(t_point dim)
{
		char** arr;
		int i;
		arr=(char**)malloc(dim.r*sizeof(char*));
		for ( i=0;i<dim.r;i++)
			arr[i]=(char*)malloc(dim.c*sizeof(char));
		return arr;
}


char** input_array(t_point dim, char** arr)
{
		int i,j;
		for (i=0;i<dim.r;i++)
		{
			for (j=0;j<dim.c;j++)
				scanf(" %c",&arr[i][j]);
		}
	return arr;
}


void free_array(t_point T,char** arr)
{
	int i;
	for( i=0;i<T.r;i++)
		free (arr[i]);
	free(arr);
	return;
		
}
void input(t_point* P)
{
	scanf("%d%d",&P->r,&P->c);
	return;
	
}
void output_array(t_point A, char** arr)
{
		int i,j;
		for(i=0;i<A.r;i++)
		{
		
				for(j=0;j<A.c;j++)
					printf("%c ",arr[i][j]);
				printf("\n");
		}
		return;
	
		
}
//exercice 1
void flood_fill(char** arr,t_point P,t_point dim,char element1,char element2)
{
		
		if (P.r<0||P.r>=dim.r||P.c<0||P.c>=dim.c)
			return;
		if(arr[P.r][P.c]==element1)
		{
			arr[P.r][P.c]=element2;
			flood_fill(arr,(t_point){P.r+1,P.c},dim,element1,element2);
			flood_fill(arr,(t_point){P.r,P.c+1},dim,element1,element2);
			flood_fill(arr,(t_point){P.r-1,P.c},dim,element1,element2);
			flood_fill(arr,(t_point){P.r,P.c-1},dim,element1,element2);
			
			
				
		} 
		return;
		
}

