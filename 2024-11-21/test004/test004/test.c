#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isPrime = 1;

    // 获取用户输入的正整数
    printf("请输入一个正整数: ");
    scanf("%d", &num);

    if (num > 1) {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d 是质数。\n", num);
        }
        else {
            printf("%d 不是质数。\n", num);
        }
    }
    else {
        printf("%d 不是质数。\n", num);
    }

    return 0;
}