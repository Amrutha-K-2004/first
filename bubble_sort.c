//BUBBLE SORT 
#include<stdio.h>
#include<stdlib.h>
int  bubble_sort(int a[],int n){
    int flag=0,count=0;
    for(int i=0;i<n-1;i++){
        flag =0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag =1;
                count++;
            }
            if(!flag)
            return count;
        }
    }
}
int main (){
    int n,a[100];
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<=n-1;i++){
    scanf("%d",&a[i]);}
    int count=bubble_sort(a,n);
   printf("The sorted array is :\n");
     for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);}
        printf("\n%d is the number of swaps",count);
    return 0;
}