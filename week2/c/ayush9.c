#include <stdio.h>
int main() {
    int n=3;
    int matrix[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int is_identity=1;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(matrix[i][j]!=(i==j))
                is_identity=0;

    if(is_identity) printf("Identity Matrix");
    else printf("Not Identity");
    return 0;
}
