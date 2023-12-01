#include <stdio.h>

void fun1(int *pointer1, int *pointer2);
void fun2(int *p1, int *p2);
void fun3(int *p, int val);

int main(void) {
    int a, b;
    int *ap, *bp;

    ap = &a;
    bp = &b;

    printf("\n Please enter initial values to a and b");
    scanf("%d %d", &a, &b);

    fun1(ap, bp);
    printf("\nafter fun1 a is %d and b is %d ", a, b);

    fun2(ap, bp);
    printf("\nafter fun2 a is %d and b is %d ", a, b);

    return 0;
}

void fun1(int* pointer1, int* pointer2) {
    *pointer1 = *pointer2 + *pointer1;
    pointer1 = pointer2;
    *pointer1 = *pointer2 + *pointer1;
}

void fun2(int* p1, int* p2) { 
    fun3(p1, *p2); 
}

void fun3(int* p, int val) {
    *p = val;
}
