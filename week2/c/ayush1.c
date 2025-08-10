#include <stdio.h>
int main() {
    int n=3,m=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int top=0,bottom=n-1,left=0,right=m-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++) printf("%d ",matrix[top][i]);
        top++;
        for(int i=top;i<=bottom;i++) printf("%d ",matrix[i][right]);
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--) printf("%d ",matrix[bottom][i]);
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--) printf("%d ",matrix[i][left]);
            left++;
        }
    }
    return 0;
}
