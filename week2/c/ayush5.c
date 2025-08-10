#include <stdio.h>
int main() {
    int rows=3, cols=3;
    int matrix[3][3]={{0,0,3},{0,0,0},{7,0,0}};
    int zeros=0;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(matrix[i][j]==0) zeros++;

    if(zeros > (rows*cols)/2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse Matrix");
    return 0;
}
