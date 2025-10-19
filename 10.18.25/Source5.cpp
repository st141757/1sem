#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    int max1 = -1;  
    int max2 = -1;  

    do {
        scanf_s("%d", &n);

        if (n != 0) {
            if (n > max1) {
                
                max2 = max1;  
                max1 = n;
            }
            else if (n > max2 || max2 == -1) {
                
                max2 = n;
            }
        }

    } while (n != 0);

    printf("%d", max2);
    return 0;
}