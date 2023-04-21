#include <stdio.h>
#include <ctype.h>
int main() {
	 char str[100];
	 int i;
	printf("enter a string: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++) {
		 if (isdigit(str[i])) {
         printf("%c is a digit.\n", str[i]);
      }
       else if (isalpha(str[i])) {
         printf("%c is an alphabet.\n", str[i]);
      }
      else {
         printf("%c is a special character.\n", str[i]);
      }
  }
  return 0;
}
