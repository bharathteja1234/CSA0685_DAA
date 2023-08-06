#include <stdio.h>
int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int lastDigit = num % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversedNum = reverseNumber(num);

    printf("Reverse of the number: %d\n", reversedNum);

    return 0;
}
