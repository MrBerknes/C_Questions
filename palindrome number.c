//palindrome number
#include <stdio.h>

int isPalindrome(int n)
 {
  int originalNum = n;
  int reversedNum = 0;

  while (n > 0) {
    reversedNum = reversedNum * 10 + n % 10;
    n /= 10;
  }

  return originalNum == reversedNum;
}

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (isPalindrome(num)) {
    printf("%d is a Palindrome number.\n", num);
  } else {
    printf("%d is not a Palindrome number.\n", num);
  }

  return 0;
}

#include <stdio.h>
