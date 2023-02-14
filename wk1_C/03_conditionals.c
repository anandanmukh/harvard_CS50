// conditionals expressions allow your programs to make decisions and take different forks in the road, depending on the values of variables or user input

// if (boolean-expr1){
//     first branch
// }

// else if (boolean-expr2){
//     second branch
// }

// else{
//     third branch
// }

#include <stdio.h>


int main(void){
    int x = 0;
    int y = 0;
    int z = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter another number: ");
    scanf("%d", &y);

    if (x > y){
        z = x;
    }
    else if (x < y){
        z = y;
    }
    else{
        z = x;
    }

    printf("The larger number is %d", z);

    return 0;
}