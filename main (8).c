#include <stdio.h>

int main() {
  int n1, n2;
  printf("Enter two integers: ");
  scanf("%d %d", &n1, &n2);
  printf("Prime numbers between %d and %d:\n", n1, n2);
  for (int i = n1; i <= n2; i++) {
    if (primo(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}