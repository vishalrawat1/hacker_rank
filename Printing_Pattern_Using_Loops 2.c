// this is the 1/4th pattern of the original problem
// 555555
// 544444
// 543333
// 543222
// 543211

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=5;
    int x;
    // scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            x=n-j;
            printf("%d",x); 
        }
        for(int k=0;k<n-i;k++){
            printf("%d",x);
            
        }
       
        printf("\n");
    }
    
    
    return 0;
}
