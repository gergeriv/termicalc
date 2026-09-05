#include <stdio.h>
#include <stdlib.h>
int add(int a, int b) {
    int result = a + b;
    return result;
}
int sub(int a, int b) {
    int result = a - b;
    return result;
}
int multi(int a, int b) {
    int result = a * b;
    return result;
}
int divis(int a, int b) {
    if (b == 0) {
        printf("division on zero!\n");
        return 0;
    } else {
        int result = a / b;
        return result;
    }
}
int main() {
    int a;
    int b;
    int result;
    int select;
    printf("select operation\n1. add\n2. sub\n3. multi\n4. divis\n");
    scanf("%d", &select);
    if (select == 1 || select == 2 || select == 3 || select == 4) {
        printf("selected: %d\n\n", select);
    } else {
        printf("unknow operation\n");
        return 0;
    }
    printf("enter first number\n");
    scanf("%d", &a);
    printf("first number: %d\nenter second number: ", a);
    scanf("%d", &b);
    if (select == 1) {
        result = add(a, b);
        printf("%d\n", result);
        return 0;
    } else if (select == 2) {
        result = sub(a, b);
        printf("%d\n", result);
        return 0;
    } else if (select == 3) {
        result = multi(a, b);
        printf("%d\n", result);
        return 0;
    } else if (select == 4) {
        result = divis(a, b);
        printf("%d\n", result);
        return 0;
    }
}
