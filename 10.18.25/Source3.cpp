#include <stdio.h>

int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;

    while (n-- > 0) {
        int next = a + b;
        a = b;
        b = next;
    }

    printf("%d", a);
    return 0;
}