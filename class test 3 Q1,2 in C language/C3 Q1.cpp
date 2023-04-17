#include <stdio.h>
int reverse(int num);
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   printf("Reverse of %d is %d", num, reverse(num));
   return 0;
}

int reverse(int num) {
   static int reversed = 0;
   if(num != 0) {
      int remainder = num % 10;
      reversed = reversed * 10 + remainder;
      reverse(num/10);
   }
   return reversed;
}

