#include <stdio.h>

int main() {
    int i, j, n = 4;
    int num = 1;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%-4d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
