#include <stdio.h>

int main() {
    // Khai bao kich thuoc ma tran vuong
    int n = 3;
    int i; 
    // Khai bao va gan gia tri cho ma tran 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0; // Bien de tinh tong duong cheo chinh
    // In cac phan tu tren duong cheo chinh
    printf("Cac phan tu tren duong cheo chinh la");
    for(i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    // In tong duong cheo 
    printf("\nTong cua cac phan tu tren duong cheo chinh %d\n", sum);

    return 0;
}

