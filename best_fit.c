  //BEST FIT ALLOCATION 
  #include <stdio.h>
  
void best_fit(int process[],int blocksize[],int m,int n){
    int alloc[100];
    for(int i=0;i<m;i++){
        alloc[i]=-1;
    }
    for(int i=0;i<m;i++){
        int best=-1;
        for(int j=0;j<n;j++){
            if(blocksize[j]>=process[i]){
                if(best==-1)
                best=j;
            
            else if(blocksize[best]>blocksize[j])
            best=j;
        }}
        
        if(best!=-1){
            alloc[i]=best;
            blocksize[best]-=process[i];
        }
    }
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
    int blocksize[]={100,50,25,430,600};
    int process[]={20,45,100,426};
    best_fit(process,blocksize,4,5);

    return 0;
}
