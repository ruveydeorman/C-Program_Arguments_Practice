#include<stdio.h>
int main(int argc, char *argv[]){
    char **arg = argv;
    int i;
    while(*arg){
    printf("%s", *arg);  
    char *str = *arg;
    i=0;
    while(*str){
    i++;
    str++;
    }
    printf(" length:%d\n", i); 
    arg++;
    }
    return 0;
}