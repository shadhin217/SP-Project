#include <stdio.h>
int main() {
    int M, N;
    printf("Enter the 2nd last digit of your Student ID (M): ");
    scanf("%d", &M);
    printf("Enter the last digit of your Student ID (N): ");
    scanf("%d", &N);
    if (M == 0 && N == 0) {
        M = 5;
        N = 5;
    }
    int A = M + 4;
    int B = N + 2;
    double totalBill = (A * 180.0) + (B * 220.0);
    double discountRate, discountAmount, finalPayable;
    if (totalBill > 2500) {
        discountRate = 0.18;
    }
    else if (totalBill >= 1200 && totalBill <= 2500) {
        discountRate = 0.12;
    }
    else {
        discountRate = 0.06;
    }
    discountAmount = totalBill * discountRate;
    finalPayable = totalBill - discountAmount;
    printf("Student ID Digits: M = %d, N = %d\n", M, N);
    printf("Quantities: A = %d strips, B = %d packs\n", A, B);
    printf("Final Payable Amount:  %.2f Tk\n", finalPayable);
    return 0;
}
