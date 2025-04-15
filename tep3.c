#include <stdio.h>

int main() {
    int A[100][100], B[100][100], C[100][100];
    int m, n;


    printf("Nhap so hang (m): ");
    scanf("%d", &m);
    printf("Nhap so cot (n): ");
    scanf("%d", &n);


    printf("Nhap ma tran A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("Nhap ma tran B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("Ma tran tong C = A + B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
