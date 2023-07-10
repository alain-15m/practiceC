#include<stdio.h>
#include<stdlib.h>

void printReversed(int n);
int main() 
{
    printReversed(2263);
    printf("\n");
    return 0; 
}
void printReversed(int n){
    if(n==0) return;
        putchar((n%10)+'0');
        printReversed(n/10);
}