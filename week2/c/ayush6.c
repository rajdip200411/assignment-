#include <stdio.h>
int main() {
    int p1[3]={3,2,5};
    int p2[3]={5,1,2};
    int res[3];

    for(int i=0;i<3;i++)
        res[i]=p1[i]+p2[i];

    printf("Sum Polynomial: ");
    for(int i=0;i<3;i++)
        printf("%d ",res[i]);
    return 0;
}
