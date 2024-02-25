//SIMULATION OF LINKED FILE ALLOCATION IN OS
#include <stdio.h>

int main()
{
int disk[100],n,i,st,off,a;
for(int i=0;i<100;i++)
    disk[i]=0;
printf("\nEnter no.of blocks already allocated.");
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a);
    disk[a]=1;

}
printf("\nEnter statring index and offset.");
scanf("%d%d",&st,&off);

if(disk[st]!=0){
    printf("\nstart is already allocated\n");
    return 0;
}
int count=0;
while(count<off){
    if(disk[st]==0){
        disk[st]=1;
        printf("\n%d ------>1\n",st);
        st++;
        count++;
    }
    else{
        printf("\n%d is already allocated\n",st);
    st++;
    
}}

    return 0;
}
