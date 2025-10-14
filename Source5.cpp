#include <stdio.h>

int main(int argc, char** argv) {
    int n;
    scanf_s("%d", &n);

    int first = n / 1000;        
    int second = n % 1000;       

    int sum1 = (first / 100) + (first / 10 % 10) + (first % 10);
    int sum2 = (second / 100) + (second / 10 % 10) + (second % 10);

    if (sum1 == sum2) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}