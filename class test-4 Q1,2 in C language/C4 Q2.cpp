#include <stdio.h>
struct distance {
    int feet;
    int inches;
};
int main() {
    struct distance distance1, distance2, sum;
    printf("Enter the first distance in feet and inches:\n");
    scanf("%d %d", &distance1.feet, &distance1.inches);
    printf("Enter the second distance in feet and inches:\n");
    scanf("%d %d", &distance2.feet, &distance2.inches);
    sum.feet = distance1.feet + distance2.feet;
    sum.inches = distance1.inches + distance2.inches;
    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }
    printf("The sum of the distances is %d feet and %d inches.\n", sum.feet, sum.inches);
    return 0;
}

