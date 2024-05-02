#include <stdio.h>

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int result;
    int num1 = 5, num2 = 7; // You can change these numbers as needed

    result = addNumbers(num1, num2);
    printf("The sum is: %d\n", result);

    return 0;
}
