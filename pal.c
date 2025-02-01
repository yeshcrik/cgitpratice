#include <stdio.h>

palindrome() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are the same
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

//    return 0;
}
