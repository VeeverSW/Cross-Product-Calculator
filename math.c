#include <stdio.h>
#include <math.h>

void length_calculator();
void single_vector();
void cosin_degree_calculator();

int main(void) {
    int user_input;
    printf("Press '1' to calculate the 3d vectors by cross product and calculate the area\n");
    printf("Press '2' to calculate the vector difference & length\n");
    printf("Press '3' to calculate the vector by points(2d & 3d)\n");
    printf("Press '4' to calculate the angle θ in radians\n");
    printf("More features in development\n");
    printf("if you want more features, please feedback in the issue\n");
    printf("Github:https://github.com/VeeverSW/Cross-Product-Calculator\n");
    printf("Please Enter the Mode Number:");

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

    } else if (user_input == 3) {
        single_vector();
        printf("Press enter to continue...\n");
        while (getchar() != '\n'); 
        getchar(); 
    } else if (user_input == 4) {
        cosin_degree_calculator();
        printf("Press enter to continue...\n");
        while (getchar() != '\n'); 
        getchar(); 
    }

    return 0;

}

//Function length_calculator
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
    return;

}

//Function single_vector
void single_vector() {
    int num_point = 0;
    printf("To calculate a vector, you need to input two points\n");
    printf("Example: A: 1 2 3; B: 2 3 4\n");
    printf("Output: vector_AB = 1 1 1\n");
    printf("At first, how many numbers in each point?(2 or 3)\n");
    scanf("%d", &num_point);


    if (num_point == 2) {
        int vector_input_A[2];
        int vector_input_B[2];

        printf("Please input point A: ");
        scanf("%d %d", &vector_input_A[0], &vector_input_A[1]);

        printf("Please input point B: ");
        scanf("%d %d", &vector_input_B[0], &vector_input_B[1]);

        int vector_2cal[2];
        vector_2cal[0] = vector_input_B[0] - vector_input_A[0];
        vector_2cal[1] = vector_input_B[1] - vector_input_A[1];


        printf("Your 2D vector AB is: <%d %d>\n", vector_2cal[0], vector_2cal[1]);


    } else if (num_point == 3) {
        int vector_input_A[3];
        int vector_input_B[3];


        printf("Please input point A: ");
        scanf("%d %d %d", &vector_input_A[0], &vector_input_A[1], &vector_input_A[2]);

        printf("Please input point B: ");
        scanf("%d %d %d", &vector_input_B[0], &vector_input_B[1], &vector_input_B[2]);

        int vector_2cal[3];
        vector_2cal[0] = vector_input_B[0] - vector_input_A[0];
        vector_2cal[1] = vector_input_B[1] - vector_input_A[1];
        vector_2cal[2] = vector_input_B[2] - vector_input_A[2];

        printf("Your 3d vector AB is: <%d %d %d>\n", vector_2cal[0], vector_2cal[1], vector_2cal[2]);

    }

}

// Function cosin_degree_calculator
void cosin_degree_calculator() {
    int degree_num_point;
    double dot_sum_product;
    double length_num_product_A;
    double length_num_product_B;
    double cos_theta;
    double theta;
    printf("This mode is used for calculate the angle θ between two vectors in radians\n");
    printf("At first, how many numbers in each point?(2 or 3 or 4)\n");
    scanf("%d", &degree_num_point);

    

    if (degree_num_point == 2) {
        double a[2] = {1.0, 2.0};
        double b[2] = {1.0, 2.0};
        printf("Please input point A(x1 x2): ");
        scanf("%lf %lf", &a[0], &a[1]);

        printf("Please input point B(x1 x2): ");
        scanf("%lf %lf", &b[0], &b[1]);
        
        dot_sum_product = a[0] * b[0] + a[1] * b[1];
        
        length_num_product_A = sqrt(a[0]*a[0] + a[1]*a[1]);
        length_num_product_B = sqrt(b[0]*b[0] + b[1]*b[1]);

        cos_theta = dot_sum_product / (length_num_product_A * length_num_product_B);

        theta = acos(cos_theta);


    } else if (degree_num_point == 3) {
        double a[3] = {1.0, 2.0, 3.0};
        double b[3] = {1.0, 2.0, 3.0};

        printf("Please input point A(x1 x2 x3): ");
        scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);

        printf("Please input point B(x1 x2 x3): ");
        scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);

        dot_sum_product = a[0] * b[0] + a[1] * b[1] + a[2] * b[2];

        length_num_product_A = sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
        length_num_product_B = sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2]);

        cos_theta = dot_sum_product / (length_num_product_A * length_num_product_B);

        theta = acos(cos_theta);

    } else if (degree_num_point == 4) {
        double a[4] = {1.0, 2.0, 3.0, 4.0};
        double b[4] = {1.0, 2.0, 3.0, 4.0};

        printf("Please input point A(x1 x2 x3 x4): ");
        scanf("%lf %lf %lf %lf", &a[0], &a[1], &a[2], &a[3]);

        printf("Please input point B(x1 x2 x3 x4): ");
        scanf("%lf %lf %lf %lf", &b[0], &b[1], &b[2], &b[3]);

        dot_sum_product = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];

        length_num_product_A = sqrt(a[0]*a[0] + a[1]*a[1] + a[2]*a[2] + a[3]*a[3]);
        length_num_product_B = sqrt(b[0]*b[0] + b[1]*b[1] + b[2]*b[2] + b[3]*b[3]);

        cos_theta = dot_sum_product / (length_num_product_A * length_num_product_B);

        theta = acos(cos_theta);
    }
    
    if (theta >= 0 && theta <= 3.1415926);
    printf("The angle between the vectors in radians is: %lf\n", theta);


}
