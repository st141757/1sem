#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    int a = 0;
    int k = 1;
    int maxk = 1;

    scanf_s("%d", &a);

    do {
        scanf_s   ("%d", &n);

        if (n != 0) {
            if (n == a) {
                k++;
            }
            else {
                if (k > maxk) maxk = k;
                k = 1;
                a = n;
            }
        }
    } while (n != 0);

    if (k > maxk) maxk = k;
    printf("%d", maxk);

    return 0;
}