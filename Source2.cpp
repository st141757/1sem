#include <stdio.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d %d %d", &a,&b,&c);
    

    int first = 1; 

   
    if (a != 0) {
        printf("%d", a);
        first = 0;
    }

    
    if (b != 0) {
        if (!first && b > 0) {
            printf("+");
        }
        if (b == 1) {
            printf("x");
        }
        else if (b == -1) {
            printf("-x");
        }
        else {
            printf("%dx", b);
        }
        first = 0;
    }

    
    if (c != 0) {
        if (!first && c > 0) {
            printf("+");
        }
        if (c == 1) {
            printf("y");
        }
        else if (c == -1) {
            printf("-y");
        }
        else {
            printf("%dy", c);
        }
        first = 0;
    }

   
    if (first) {
        printf("0");
    }

    return 0;
}