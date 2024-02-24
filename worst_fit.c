 //WORST FIT
 #include <stdio.h>
  
void worstfit(int process[],int blocksize[],int m,int n){
    int alloc[100];
    for(int i=0;i<m;i++){
        alloc[i]=-1;
    }
    for(int i=0;i<m;i++){
        int worst=-1;
        for(int j=0;j<n;j++){
            if(blocksize[j]>=process[i]){
                if(worst==-1)
                worst=j;
            
            else if(blocksize[worst]<blocksize[j])
            worst=j;
        }}
        
        if(worst!=-1){
            alloc[i]=worst;
            blocksize[worst]-=process[i];
        }
    }
    printf("\n process no\t\t\tprocess_size\t\t block_size\n");
    
    for(int i=0;i<m;i++){
        printf("%d",i+1);
        printf("\t\t\t\t %d",process[i]);
        if(alloc[i]!=-1)
        printf("\t\t\t       %d",alloc[i]+1);
        else{
            printf("\t\t\t    not allocated");
            
        }
        printf("\n\n");
        
    }
}

int main()
{
    int blocksize[]={100,500,200,300,600};
    int process[]={350,300,100,200,500};
    worstfit(process,blocksize,5,5);

    return 0;
}
