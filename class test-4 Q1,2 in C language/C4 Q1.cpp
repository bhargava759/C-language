#include <stdio.h>
#include <string.h>
union student {
    char name[50];
    float gpa;
};
int main() {
    union student s;
    printf("Enter the student's name");
    fgets(s.name, 50, stdin);
    printf("Enter the student's GPA");
    scanf("%f", &s.gpa);
    printf("Student's name: %s", s.name);
    printf("Student's GPA: %f", s.gpa);
    return 0;
}
