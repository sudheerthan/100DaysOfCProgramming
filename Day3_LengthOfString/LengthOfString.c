#include <stdio.h>
int findLen(char str[]);

int main(){
	char str[50];
	printf("Enter a string\n");
	scanf("%s",str);
	int len = findLen(str);
	printf("the lenth of string = %d\n", len);
}

int findLen(char str[]){
	int len =0;
	while(str[len]!='\0'){
		len++;
	}
	return len;
}
