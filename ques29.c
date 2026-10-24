#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++) 
            printf(" ");
        
        int C = 1; 

        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}