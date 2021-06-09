#ifndef header2_h
#define header2_h

#include<stdio.h>
#include<stdlib.h>

struct s_point
{
		char r;
		char c;
};
typedef struct s_point t_point;

char** allocated_array(t_point);
char** input_array(t_point,char**);
void free_array(t_point,char**);
void input(t_point*);
void output_array(t_point,char**);
void flood_fill(char**,t_point,t_point,char,char);

#endif
