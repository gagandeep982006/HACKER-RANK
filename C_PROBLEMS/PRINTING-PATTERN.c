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

//first and easy method to solve this problem
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int L = 2 * n - 1;
    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= L; j++) {
            int dr = abs(i - n);
            int dc = abs(j - n);
            int d  = dr > dc ? dr : dc;
            printf("%d ", d + 1);
        }
        printf("\n");
    }
    return 0;
}


//second and easy method to solve this problem
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
        if( i > n){
            k++;
        }
        for(int j = 0; j<(2*n -1);j++){
            if((j>=i )&& (j<((2*n-1)-(i))) && i < n)
                arr[j] = n-i;
            else if (j >= ((2*n-1)-(i+1)) && (j < i))
                arr[j] = k;
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    
    return 0;
}
