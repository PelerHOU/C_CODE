#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����쳲��������е� n ��ĺ���
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int n;
    printf("������Ҫ�����쳲��������е�������");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("쳲��������е� %d ���� %d\n", n, result);
    return 0;
}