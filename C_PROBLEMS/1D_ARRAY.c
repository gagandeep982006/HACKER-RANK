//Print the sum of the integers in the array.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int* arr,size,sum = 0;
    scanf("%d",&size);
    
    arr = (int*)malloc(sizeof(int)*size);
    
    for(int i =0; i< size;i++){
        scanf("%d",arr+i);
        sum += (arr[i]);
    }
    
    printf("%d",sum);
    
    free(arr);
    arr = NULL;
        
    return 0;
}

