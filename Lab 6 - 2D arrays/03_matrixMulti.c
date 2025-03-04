#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("No. of rows and column for 1: ");
    scanf("%d %d", &r1, &c1);
    printf("No. of rows and column for 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    int a[r1][c1], b[r2][c2], res[r1][c2];

    printf("Enter elements for matrix 1:\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){ scanf("%d", &a[i][j]); }
    }
    printf("Enter elements for matrix 2:\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){ scanf("%d", &b[i][j]); }
    }
    //multiplication part
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++){ 
                res[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
