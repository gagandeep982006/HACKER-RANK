/*ex->
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int arr[2*n-1];
  	for(int i = 0; i<2*n-1;i++){
        arr[i] = n;
    }
    
    for(int i = 0,k = 2;i<2*n -1;i++){
        if( i > 2*n/2){
            k++;
        }
        for(int j = 0; j<(2*n -1);j++){
            if((j>=i )&& (j<((2*n-1)-(i))) && i < (2*n)/2)
                arr[j] = n-i;
            else if (j >= ((2*n-1)-(i+1)) && (j < i))
                arr[j] = k;
            (j != 2*n-2)? printf("%d ",arr[j]) : printf("%d",arr[j]);
        }
        printf("\n");
    }
    
    return 0;
}
