#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[],int *size, int element, int position){
    if(*size >= MAX_SIZE ){
        printf("array is full, insertion failed");
        return 1;
    }
    if(position < 0 || position > MAX_SIZE){
        printf("invalid postion , insertion failed");
    }
    for(int i = *size;i > position; i--){
        arr[i] = arr[i-1]
    }
}

int main(){
    int arr[MAX_SIZE];
    int size = 0;


}