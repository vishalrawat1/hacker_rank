#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,x;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        arr[i]=x;
    }
    for(int j=0;j<n;j++){
        
        sum=sum+arr[j];
    }
    printf("%d",sum);
    
    return 0;
}
