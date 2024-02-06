#include <stdio.h>
int findLen(char str[]);

int main(){
    char str[50],temp;
    printf("enter a string\n");
    fgets(str,49,stdin);
    int len = findLen(str);
    for (int i = 0; i < len / 2; i++){
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}

int findLen(char str[]){
    int len = 0;
    while(str[len] != '\0' ){
        len++;
    }
    return len;
}