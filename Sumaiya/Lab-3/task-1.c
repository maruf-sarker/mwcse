#include<stdio.h>
int main(){
    int i;
    char ch;

    for(i = 97; i <= 122; i++){
        ch = i;
        printf("%c\t", ch);
    }
    printf("\n");

    return 0;
}