#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    char **arg = argv;
    int i = 0;
    while(*arg){
        arg++;
        i++;
    }
    printf("count of argument:%d\n",i);
   return 0;
}