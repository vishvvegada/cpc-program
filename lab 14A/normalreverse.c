#include<stdio.h>
void main(){
    int i,n,reverse_number,normal_number;
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i = n-1;i>=0;i--)
    {
       
        printf("%d",arr[i]);
    }
}