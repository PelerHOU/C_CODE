#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isPrime = 1;

    // ��ȡ�û������������
    printf("������һ��������: ");
    scanf("%d", &num);

    if (num > 1) {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ��������\n", num);
        }
        else {
            printf("%d ����������\n", num);
        }
    }
    else {
        printf("%d ����������\n", num);
    }

    return 0;
}