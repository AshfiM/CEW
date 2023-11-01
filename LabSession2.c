#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int count(char str[]) {
    int a = 0;
    int length = 0;
    while (str[a]){
        length += 1;
        a++;
    }
    return length;
}

struct inch_feet {
    int inch;
    int feet;
};

int main() {
    // for (int a = 10; a < 20; a++){
    //     printf("value of a: %d\n", a);
    // }
    // int table;
    // printf("table no:");
    // scanf("%d", &table);

    // for (int i; i < 10; i++){
    //     if (i % 2 == 0) {
    //         continue;
    //     }
    //     printf("%d x %d = %d\n", table, i, table * i);
    // }

    // int i = 1;
    // int table;
    // printf("table no: ");
    // scanf("%d", &table);

    // while (i < 11){
    //     if (table < 0){
    //         break;
    //     }
    //     printf("%d x %d = %d\n", table, i, table * i);
    //     i++;
    // }

    // int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         printf("row %d coloum %d: ", i, j);
    //         scanf("%d", &matrix[i][j]);

    //     }
    //     printf("\n");
    // }

    //    for (int i = 0; i < 2; i++) {
    //         for (int j = 0; j < 3; j++) {
    //             printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }


    


    // Q 1
    

    // for loop

    // int n;
    // printf("no of odds: ");
    // scanf("%d", &n);

    // int sum = 0;
    // int odd = 0; 

    // for (int i = 0; i <= n ; i++){
    //     odd = (2 * i) + 1;
    //     printf("%d \n", odd);
    //     sum += odd;
    // }
    // printf("sum %d\n", sum);


    //while loop

    // int i = 0;
    // int odd = 0;
    // int sum = 0;
    // int odds;
    // printf("No of Odds: ");
    // scanf("%d", &odds);

    // while (i <= odds) {
    //     odd = (2 * i ) + 1;
    //     printf("%d ", odd);
    //     sum += odd;
    //     i++;

    // }
    // printf("\nsum = %d\n", sum);

    // do-while loop

    // int i = 0;
    // int sum = 0;
    // int odd = 0;
    // int odds;

    // printf("no of odds: ");
    // scanf("%d", &odds);

    // do {
    //     odd = (2 * i) + 1;
    //     printf("%d ", odd);
    //     sum += odd;
    //     i++; 
    // } while (i <= odds);

    // printf("\nsum = %d\n", sum);

    // Q 2
    
    int rows;
    printf("rows: ");
    scanf("%d", &rows);
    int spaces = rows -1;

    for (int i = 0; i < rows; i++) {
        for (int j = spaces; j > 0; j--) {
            printf(" ");
        }
        for (int k =0; k < i; k++) {
            printf("* ");
        }
        printf("\n");
        spaces--;

    }

    // Q 3

    // char str1[] = "Hello";
    // char str2[] = "World";
    
    // int count1 = count(str1);
    // int count2 = count(str2);
    // if (count1 == count2) {
    //     printf("true strings equal length\n");
    // }

    // char string[] = "System Programming in C";
    // int i = 0;
    // while (string[i]) {
    //     printf("%c ", string[i]);
    //     i++;
    // }
    
     // Q 4
    // char string[] = "Upper case to lower Case";
    // char new_string[] = "written";
    // int i = 0;
  
    // while (string[i]){
    //     if (isupper(string[i])) {
    //         int str = tolower(string[i]);
    //         string[i] = str;
    //     } else {
    //         int str = toupper(string[i]);
    //         string[i] = str;
    //     }
    //     i++;
    // }
    // printf("%s\n", string);

    // Q 5

    printf("unique elements in array ");
    int i = 0;
    int array[10] = {1, 2, 3, 4, 5, 6, 6, 6, 7, 8};
    while (i < 10){
        int count = 0;
        int j = 0;
        while (j < 10) {
            if (array[i] == array[j]) {
                count += 1;
            }
            j++;   
        }
        if (count == 1) {
                printf("%d ", array[i]);
            }
        i++;

    }
    printf("\n");
     
    // Q 6
    
    // struct inch_feet distance1;
    // struct inch_feet distance2;
    // struct inch_feet distance_t;

    // distance1.inch = 8;
    // distance1.feet = 2;

    // distance2.inch = 6;
    // distance2.feet = 3;

    
    // distance_t.inch = distance1.inch + distance2.inch;
    // distance_t.feet = distance1.feet + distance2.feet;

    // if (distance_t.inch >= 12) {
    //     distance_t.inch -= 12;
    //     distance_t.feet += 1; 
    // }

    // printf("distance = %d Feet %d inches\n", distance_t.feet, distance_t.inch);


    return 0;
}
        
