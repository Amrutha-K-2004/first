//FIFO PAGE REPALCEMENT ALGORITHM 
#include <stdio.h>

int main()
{
    //3 TYPES OF INPUTS PROVIDED
    int sr[]={7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1};  //--->PF=15   
    // int sr[] = {4,1,2,4,5};          //--->PF=4
    // int sr[]={4,7,6,1,7,6,1,2,7,2};    //--->PF=6
    int pf=0,s=0;
    int frames=3;
    int pages=sizeof(sr)/4;
    int temp[frames];
    printf("\n string-reference\t  frame-1    frame-2 \tframe-3\n");
    for(int i=0;i<frames;i++)
    temp[i]=-1;
    
    for(int i=0;i<pages;i++){
        s=0;
        for(int j=0;j<frames;j++){
            if(temp[j]==sr[i]){
                s++;
                pf--;
            }
        }
        pf++;
        if(s==0 && pf<=frames)
        temp[i]=sr[i];
        else if(s==0)
        temp[(pf-1)%frames]=sr[i];
        printf(" %d\t\t\t",sr[i]);
        for(int k=0;k<frames;k++){
            
            if(temp[k]==-1)
            printf("\t-");
            else
            printf("\t%d",temp[k]);
        }
        printf("\n\n");
        
        
    }
     printf("\n total no.of pagefaults is : %d",pf);

    return 0;
}
