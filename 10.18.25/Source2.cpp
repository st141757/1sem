#include<stdio.h>

int main(int argc, char** argv) {


}



#include <stdio.h>

int main() {
    int num;
    int index = 1;
    int min_odd, max_even;

    // ������ ����� ������ �� �������� �������
    scanf("%d", &num);
    min_odd = num;

    // ������ ����� ������ �� ������ �������  
    scanf("%d", &num);
    max_even = num;

    // ������������ ��������� �����
    index = 3;
    while (scanf("%d", &num) == 1) {
        if (index % 2 == 1) {
            if (num < min_odd) min_odd = num;
        }
        else {
            if (num > max_even) max_even = num;
        }
        index++;
    }

    printf("%d", min_odd + max_even);
    return 0;
}