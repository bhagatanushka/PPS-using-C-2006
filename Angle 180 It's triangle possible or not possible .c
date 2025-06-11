#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the first angle: ");
  scanf("%d", &a);
  printf("Enter the second angle: ");
  scanf("%d", &b);
  printf("Enter the third angle: ");
  scanf("%d", &c);
  int sum = a + b + c; // Corrected variable name and semicolon

  if (sum == 180) {
    printf("Triangle is possible\n"); // Added newline for better formatting
  } else {
    printf("Triangle is not Possible\n"); // Added newline
  }

  return 0;
}