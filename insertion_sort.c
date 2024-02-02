//INSERTION SORT
#include<stdio.h>
#include<stdlib.h>
void insert_inorder(int a[],int upper,int key){
    int j=upper-1;
    while(j>=0 && key<a[j]){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;

}
void insertion_sort(int a[],int n){
    int index;
    for(int i=1;i<=n-1;i++){
        index=i;
        insert_inorder(a,i,a[i]);
    }
}

int main (){
   int n,a[100];
    printf("\nEnter the number of elements ");
    scanf("%d",&n);
    printf("Enter the array elements ");
    for(int i=0;i<=n-1;i++){
    scanf("%d",&a[i]);}
  insertion_sort(a,n);
  for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);}
  
return 0;
}