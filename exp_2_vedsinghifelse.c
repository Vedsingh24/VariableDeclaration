/*array is used to declare multiple values, it is a derived data type,it stores in memory location which has a address. each address has 1 byte=8bits*/

#include <stdio.h>
#include <conio.h>
int main()
{
int varA[10]={10,12,13,14,15,16,26,12,17,45}; /*syntax for declaring array where[] is the size.*/
int index;
printf ("array position=");
;scanf ("%d",&index);
if (index < 10){printf ("%d", varA[index]);}/* declaring for every element in array to be printed, syntax of if else function*/
else{printf ("error");}
return 0;}/*curly bracket after return 0*/

