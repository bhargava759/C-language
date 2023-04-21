#include <stdio.h>
int main() {
	float salary,bonous;
	printf("enter the employee's salary: ");
	scanf("%f", &salary);
	if(salary<1000) {
		bonous=salary*10/100;
	}
	else if(salary>1000) {
		bonous=salary*20/100;
	}
	else if(salary>5000) {
		bonous=salary*30/100;
	}
	printf("The employee's bonus is: %.2f", bonous);
    return 0;
}
