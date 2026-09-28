#include <stdio.h>
int main() {
    int M, R,i,j;
    printf("Enter the last digit of your student ID: ");
    scanf("%d", &M);
    R = (M % 4) + 4;
    printf("Calculated Number of Rows = %d\n", R);
    printf("AeroBot's Drone Signal Pattern\n");
    for (i = 1; i <= R; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
