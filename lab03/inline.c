#include<stdio.h>

static inline int add(int a, int b) //inline function declaration
{
 return(a+b);
}
int main(){
 int c;
 c=add(2,3);
 printf("Addition  =  %d\n",c);
 return 0;
}
