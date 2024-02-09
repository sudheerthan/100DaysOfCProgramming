#include <stdio.h>

int main() {
    int num, reversed = 0, original, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        temp = num % 10;
        reversed = reversed * 10 + temp;
        num /= 10;
    }
    if (original == reversed)
        printf("The number is a palindrome number.");
    else
        printf("The number is not a palindrome number.");
    return 0;
}