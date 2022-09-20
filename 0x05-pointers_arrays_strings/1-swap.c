#include "main.h" 

/** 
*swap_int - swaps two interger's values
*@a: first interger   
*@b: second interger 
*return: returns nothing 
*/   

void swap_int( int *a, int *b)    
{
int tmp = *a;  

    *a = *b; 
    *b = tmp;   
