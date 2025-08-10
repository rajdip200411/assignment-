#include <stdio.h>
int main() {
    int n=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int main_sum=0, anti_sum=0;

    for(int i=0;i<n;i++){
        main_sum += matrix[i][i];
        anti_sum += matrix[i][n-i-1];
    }

    printf("Main Diagonal Sum: %d\n", main_sum);
    printf("Anti Diagonal Sum: %d\n", anti_sum);
    return 0;
}
