#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

void printPalindromicPrimes(int a, int b) {
    cout << "Palindromic prime numbers between " << a << " and " << b << ":" << endl;

    for (int i = a; i <= b; ++i) {
        if (isPrime(i) && isPalindrome(i)) {
            cout << i;
        }
    }
}

int main() {
    int a, b;

    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    printPalindromicPrimes(a, b);

    return 0;
}