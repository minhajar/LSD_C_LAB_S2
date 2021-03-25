#include "header.h"
#include<stdio.h>
#include<stdlib.h>
/*
** Hint: You need to use rand function for generating random numbers
** and to get out of getting the same series of random numbers every time
** you run the program you need to use srand.
** https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
*/
void rand_fill_table(int *tab, int size)
{
    tab=(int*)malloc(size*sizeof(int));
    srand(rand());   //maybe instead of rand() we put another unsigned so everytime the serie changes(i know stupid comment)//
    int i;
    for ( i=0;i<size;i++)
    	printf("%d,",*(tab+i)=rand());//i didn't know how to make another function to print the table so i just put it down here, i mean it kinda worked//
    return;
}
