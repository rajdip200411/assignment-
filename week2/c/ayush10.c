#include <stdio.h>
int main() {
    int rows=3, cols=3;
    int matrix[3][3]={{0,1,0},{2,0,3},{0,0,0}};
    int count=0;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(matrix[i][j]==0) count++;

    printf("Zero Count: %d", count);
    return 0;
}
