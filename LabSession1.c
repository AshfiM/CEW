#include <stdio.h>

int fibon(int f, int g, int term) {
    int b = f;
    int c = g;
    int d = b + c;
    printf("%d ", d);
    if (d < term) {
        fibon(c, d, term);
    }
    else {
        printf("\n");
    }
}

int factorial(int num){
    if (num == 1) {
        return 1;
    }

    return num * factorial(num - 1);
}


void table(int x) {
    printf("1 x %d = %d\n", x, 1 * x);
    printf("2 x %d = %d\n", x, 2 * x);
    printf("3 x %d = %d\n", x, 3 * x);
    printf("4 x %d = %d\n", x, 4 * x);
    printf("5 x %d = %d\n", x, 5 * x);
    printf("6 x %d = %d\n", x, 6 * x);
    printf("7 x %d = %d\n", x, 7 * x);
    printf("8 x %d = %d\n", x, 8 * x);
    printf("9 x %d = %d\n", x, 9 * x);
    printf("10 x %d = %d\n", x, 10 * x);

}

int main() {

    // int f = factorial(4);
    // printf("%d\n", f);
    // printf("hello World\n");

    // int a;
    // int b;

    // printf("Enter an operandm 1: ");
    // scanf("%d", &a);

    // printf("\nEnter an operand 2: ");
    // scanf("%d", &b);

    // printf("%d + %d = %d\n", a, b, a + b);
    // printf("%d - %d = %d\n", a, b, a - b);
    // printf("%d x %d = %d\n", a, b, a * b);
    // printf("%d / %d = %.2f\n", a, b, (float)a / b);

    // int c;
    // printf("Enter an integer: ");
    // scanf("%d", &c);

    // if (c % 2 == 0) {
    //     printf("Even Number\n");
    // } else {
    //     printf("Odd Number\n");
    // }

    // int e;
    // int g;
     
    // printf("Enter an integer 1: ");
    // scanf("%d", &e);

    // printf("Enter an Integer 2: ");
    // scanf("%d", &g);

    // if (e > 10 && g > 10) {
    //     printf("%d + %d = %d\n", e, g, e + g);
    // } else if (e > 10 || g > 10 ) {
    //     printf("%d x %d = %d\n", e, g, e * g);
    // } else {
    //     printf("Hello world\n");
    // }

 
    // int i;

    // printf("Enter an integer: ");
    // scanf("%d", &i);
    // table(i);


    // Excercise 
    // Q 1

    // int employeesID;
    // int workedHours;
    // int amountReceivedPerHour;

    // printf("Enter hours worked: ");
    // scanf("%d", &workedHours);

    // printf("Enter amount Received Per Hour: ");
    // scanf("%d", &amountReceivedPerHour);

    // printf("ID %d Salary is %d \n", employeesID, workedHours * amountReceivedPerHour);

    // Q 2

    // float height;
    // float width;

    // printf("Enter the height: ");
    // scanf("%f", &height);

    // printf("Enter the Width: ");
    // scanf("%f", &width);

    // printf("Perimeter = %.1f \n", 2 * height * width);
    // printf("Area = %.1f\n", height * width);

    // Q 3

    // int height;

    // printf("Enter height: ");
    // scanf("%d", &height);

    // if (height < 150) {
    //     printf("Dwarf\n");
    // } else if (height == 150){
    //     printf("Average\n"); 
    // }  else if (height >= 165) {
    //     printf("Tall\n");
    // }

    // binary(1);


    // int time = 20;
    // (time < 18) ? printf("Good day.") : printf("Good evening.");

    // int i = 3;
    // char j;
    // (i > 2) ?  printf("T"):printf("f");
    
    // printf("%d \n", 7%2);

    // Q 5
    // int term;
    // printf("nth term ");
    // scanf("%d", &term);
    fibon(0, 1, 20);



}