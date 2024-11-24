#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 计算斐波那契数列第 n 项的函数
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
    printf("请输入要计算的斐波那契数列的项数：");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("斐波那契数列第 %d 项是 %d\n", n, result);
    return 0;
}