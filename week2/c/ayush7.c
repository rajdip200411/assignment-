#include <stdio.h>
int main() {
    int p1[2]={3,2};
    int p2[2]={1,4};
    int res[3]={0};

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            res[i+j]+=p1[i]*p2[j];

    printf("Product Polynomial: ");
    for(int i=0;i<3;i++)
        printf("%d ",res[i]);
    return 0;
}
