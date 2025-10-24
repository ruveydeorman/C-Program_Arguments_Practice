#include<stdlib.h>
#include<stdio.h>
// pointer mantığını anlamak için hazır fonksiyonlar kullanmak  yerine döngülerle işlemleri gerçekleştirdim.
int main(int argc,char *argv[]){
    char **arg = argv;
    char *str = "ruveyde";
    int found;
    int count = 0;
    while(*arg){
    char *temp_arg = *arg;
    char *temp_str =  str;
    found = 1;
    
        while(*temp_arg!='\0' && *temp_str!='\0'){
            if(*temp_arg != *temp_str){
                found = 0;
                break;
            }
            else{
                temp_arg++;
                temp_str++;
            }
        }
        if(found && *temp_arg == *temp_str){
            count = 1;
            break;  
        }
         else{
            arg++;    
            }
        }
    if (count == 1){
        printf("argument is found\n");
    }
    else{
        printf("argument is not found\n");
    }
    return 0;
}