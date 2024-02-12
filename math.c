#include <stdio.h>
int main(void) {
    int a[3]; 
    int b[3]; 
    int ans[3]; 

    printf("Enter 3 components of vector a: ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    printf("Enter 3 components of vector b: ");
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    ans[0] = a[1] * b[2] - a[2] * b[1];
    ans[1] = a[2] * b[0] - a[0] * b[2];
    ans[2] = a[0] * b[1] - a[1] * b[0];

    printf("The cross product is: %d %d %d\n", ans[0], ans[1], ans[2]);
    int sum = ans[0] + ans[1] + ans[2];
    printf("The sum is : %d\n", sum);

    return 0;
}