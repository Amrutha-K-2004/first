//SELECTION SORT
#include<stdio.h>
#include<stdlib.h>
int  selection_sort(int a[],int n)
{
    int temp,j,count=0;
    for(int i=0;i<n-1;i++)
    {
       int  min=i;
        for( j=i+1;j<=n-1;j++){
            if(a[min]>a[j]){
                min=j;
            }}
            if(a[min]<a[i]){   //if condition added to ensure optimisation.
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
            count++;
     }}
     return count;
}
int main (){
    int n;
    int a[100];
     printf("\nEnter the number of elements ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(int i=0;i<=n-1;i++){
    scanf("%d",&a[i]);}
    
    int count=selection_sort(a,n);
     for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);}
    printf("\nThe number of swaps are: %d ",count);

return 0;
}