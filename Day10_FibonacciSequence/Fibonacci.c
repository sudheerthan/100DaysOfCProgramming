#include <stdio.h>
int main() {

  int i, num;

  int n1 = 0, n2 = 1;

  int next = n1 + n2;

  printf("Enter the number of sequence\n");
  scanf("%d", &num);

  printf("Fibonacci Sequences : %d, %d, ", n1, n2);

  for (i = 3; i <= num; ++i) {
    printf("%d, ", next);
    n1 = n2;
    n2 = next;
    next = n1 + n2;
  }

  return 0;
}
