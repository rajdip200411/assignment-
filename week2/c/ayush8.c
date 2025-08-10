#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, size=0;

    // Append
    size++; arr = realloc(NULL, size*sizeof(int)); arr[size-1]=10;
    size++; arr = realloc(arr, size*sizeof(int)); arr[size-1]=20;
    size++; arr = realloc(arr, size*sizeof(int)); arr[size-1]=30;

    printf("After Append: ");
    for(int i=0;i<size;i++) printf("%d ",arr[i]);

    // Delete 20
    int delIndex=-1;
    for(int i=0;i<size;i++) if(arr[i]==20) delIndex=i;
    for(int i=delIndex;i<size-1;i++) arr[i]=arr[i+1];
    size--; arr = realloc(arr, size*sizeof(int));

    printf("\nAfter Remove: ");
    for(int i=0;i<size;i++) printf("%d ",arr[i]);

    free(arr);
    return 0;
}
