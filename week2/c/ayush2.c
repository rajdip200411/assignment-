#include <stdio.h>
int main() {
    int n=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rotated[3][3];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            rotated[j][n-i-1]=matrix[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",rotated[i][j]);
        printf("\n");
    }
    return 0;
}
