#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

int main(int argc, char **argv) {
   int j,i,a[MAX];

   
     for (i=0; i < MAX; i++)
         a[i]=i;

     for(j=0;j<MAX;j++)
     printf("%d  ",a[j]);
     //-------------------
     //counting a String length from the command line
      int strsize=0;
      for(i=1;i<argc;i++){
        strsize += strlen(argv[i]);
         if(argc>i+1) strsize++; 
      }
      
      char *cmdstr;
        cmdstr = malloc(strsize+1);                       




    //   while(strsize)
    //   printf("\n%d",strsize);

    


     
    

    return 0;

}