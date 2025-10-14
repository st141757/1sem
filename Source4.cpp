#include<stdio.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int N;
    scanf_s("%d", &N);

    if (N == 1) {
        printf("0");
    }
    else if (N % 2 == 0) {
        printf("%d", N / 2);
    }
    else {
        printf("%d", N);
    }

    return 0;
}