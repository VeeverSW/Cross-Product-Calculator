#include <stdio.h>
#include <math.h>

void length_calculator();
int main(void) {
    int user_input;
    printf("Press '1' to calculate the 3d vectors for 2 values\n");
    printf("Press '2' to calculate the vector difference & length\n");
    printf("More features in development\n");
    printf("if you want more features, please feedback in the issue\n");
    printf("Github:https://github.com/VeeverSW/Cross-Product-Calculator\n");

    scanf("%d", &user_input);
    while ((getchar()) != '\n');

    if (user_input == 1) {
        int a[3]; 
        int b[3]; 
        int ans[3]; 

        printf("Enter 3 components of vector a: ");
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        while ((getchar()) != '\n'); 

        printf("Enter 3 components of vector b: ");
        scanf("%d %d %d", &b[0], &b[1], &b[2]);
        while ((getchar()) != '\n'); 

        ans[0] = a[1] * b[2] - a[2] * b[1];
        ans[1] = a[2] * b[0] - a[0] * b[2];
        ans[2] = a[0] * b[1] - a[1] * b[0];

        printf("The cross product is: %d %d %d\n", ans[0], ans[1], ans[2]);
        int sum = ans[0] + ans[1] + ans[2];

        printf("The sum is: %d\n", sum);
        double area = sqrt(ans[0] * ans[0] + ans[1] * ans[1] + ans[2] * ans[2]);
        printf("The area is: %lf\n", area);

        printf("Press enter to continue...\n");
        while (getchar() != '\n'); 
        getchar(); 



    } else if (user_input == 2) {
        length_calculator();

        printf("Press enter to continue...\n");
        while (getchar() != '\n'); 
        getchar(); 
    }

    return 0;

}

void length_calculator() {
    int A[3]; 
    int B[3]; 
    int C[3]; 
    int vec_AB[3];
    int vec_AC[3];
    int vec_BC[3];
    double length_AB, length_AC, length_BC;

    printf("Enter 3 components of vector A: ");
    scanf("%d %d %d", &A[0], &A[1], &A[2]);

    printf("Enter 3 components of vector B: ");
    scanf("%d %d %d", &B[0], &B[1], &B[2]);

    printf("Enter 3 components of vector C: ");
    scanf("%d %d %d", &C[0], &C[1], &C[2]);

    //Calculate vectors
    for (int i = 0; i < 3; i++) {
        vec_AB[i] = B[i] - A[i];
        vec_AC[i] = C[i] - A[i];
        vec_BC[i] = C[i] - B[i];
    }

    // Calculate length
    length_AB = sqrt(pow(vec_AB[0], 2) + pow(vec_AB[1], 2) + pow(vec_AB[2], 2));
    length_AC = sqrt(pow(vec_AC[0], 2) + pow(vec_AC[1], 2) + pow(vec_AC[2], 2));
    length_BC = sqrt(pow(vec_BC[0], 2) + pow(vec_BC[1], 2) + pow(vec_BC[2], 2));

    // Calculate num inside sqrt
    double sqrtnum_AB = pow(vec_AB[0], 2) + pow(vec_AB[1], 2) + pow(vec_AB[2], 2);
    double sqrtnum_AC = pow(vec_AC[0], 2) + pow(vec_AC[1], 2) + pow(vec_AC[2], 2);
    double sqrtnum_BC = pow(vec_BC[0], 2) + pow(vec_BC[1], 2) + pow(vec_BC[2], 2);

    // Output
    printf("Vector AB is <%d, %d, %d>\n", vec_AB[0], vec_AB[1], vec_AB[2]);
    printf("Length of vector AB is %f\n", length_AB);
    printf("AB: sqrt(%lf)\n", sqrtnum_AB);

    printf("Vector AC is <%d, %d, %d>\n", vec_AC[0], vec_AC[1], vec_AC[2]);
    printf("Length of vector AC is %f\n", length_AC);
    printf("AC: sqrt(%lf)\n", sqrtnum_AC);


    printf("Vector BC is <%d, %d, %d>\n", vec_BC[0], vec_BC[1], vec_BC[2]);
    printf("Length of vector BC is %f\n", length_BC);
    printf("BC: sqrt(%lf)\n", sqrtnum_BC);

}

