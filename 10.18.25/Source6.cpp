#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf_s("%d", &n);  

    int a = 0;  
    int b = 0;      

    for (int i = 0; i < n; i++) {
        int t;
        scanf_s("%d", &t); 

        if (t > 0) {
            
            a++;
        }
        else {
            
            if (a > b) {
                b = a;  
            }
            a = 0;  
        }
    }

    
    if (a > b) {
        b = a;
    }

    printf("%d", b);
    return 0;
}