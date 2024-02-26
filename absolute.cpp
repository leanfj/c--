#include <cstdio>


int absolute_value(int x) {
    if(x >= 0) {
        return x;
    }
    return x * -1;
}

int sum(int num1, int num2) {
    return num1 + num2;
}


int main () {

    int my_num = 2;
    int other_num = 10;

    int result = sum(my_num, other_num);

    printf("The Absolute value of %d is %d. \n", my_num, absolute_value(my_num));
    printf("The sum of %d + %d = %d", my_num, other_num, result);
    return 0;
}