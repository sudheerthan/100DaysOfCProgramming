#include <stdio.h>
#include <stdlib.h>

int findLen(char str[]);
void getInput(char str[],int len);

int main(){
	char str[50];

	getInput(str,49);

	int len = findLen(str);

	if(len >= 48 && str[48] != '\n'){
		printf("error: may have been string is truncated");
	}
	printf("the lenth of string = %d\n", len); // len-1 is to avoid '\0'
}

int findLen(char str[]){
	int len =0;
	while(str[len] !='\0' && str[len] != '\n'){
		len++;
	}
	return len;
}

void getInput(char str[],int size){
	printf("Enter a string\n");
	if(fgets(str,size,stdin)==NULL){
		printf("Error reading input\n");
		exit(1);
	}
	int len = findLen(str);
	//remove newline if present
	if(len >0 && str[len-1] == '\n'){
		str[len-1]='\0';
	}
}
	
	
