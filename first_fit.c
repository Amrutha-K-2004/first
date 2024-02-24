 //FIRST FIT
 #include <stdio.h>
  
void first_fit(int process[],int blocksize[],int m,int n){
    int alloc[100];
    for(int i=0;i<m;i++){
        alloc[i]=-1;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(blocksize[j]>=process[i]){
                alloc[i]=j;
                blocksize[j]-=process[i];
                break;
    }}}
    printf("\n process no\t\t\tprocess_size\t\t\tblock_size\n");
    
    for(int i=0;i<m;i++){
        printf("%d",i+1);
        printf("\t\t\t\t %d",process[i]);
        if(alloc[i]!=-1)
        printf("\t\t\t    %d",alloc[i]+1);
        else{
            printf("\t\t\t    not allocated");
            
        }
        printf("\n\n");
        
    }
}

int main()
{
    int blocksize[]={100,500,200,300,600};
    int process[]={212,417,112,426};
    first_fit(process,blocksize,4,5);

    return 0;
}
