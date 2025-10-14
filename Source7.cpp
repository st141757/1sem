#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1 = 0; 
    int y1 = 0;  
    int x2 = 0;
    int y2 = 0;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1)) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}