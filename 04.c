#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    printf("Numbers between 1 and 1000 satisfying the condition:\n");

    for (int i = 1; i <= 1000; ++i) {
        int reversed = reverseNumber(i);
        int difference = i - reversed;
        int sum = sumOfDigits(i);

        if (difference == sum) {
            printf("%d\n", i);
        }
    }

    return 0;
}
