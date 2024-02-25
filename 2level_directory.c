//2 level directory in os
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct {
    int filecnt;
    char dname[100],fname[100][100];
}dir[10];
int main()
{
    int choice,i;
    int dcnt=0;
    char d[100],f[100];
    for(;;){
    printf("\n1.create new directory  2. insert file   3. delete file    4.display   5.exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\nenter the name of directory ");
        scanf("%s",dir[dcnt].dname);
        dir[dcnt].filecnt=0;
        dcnt++; break;
        case 2: printf("\nenter name of directory");
        scanf("%s",d);
        for(  i=0;i<dcnt;i++){
            if(strcmp(d,dir[i].dname)==0){
                printf("\nenter name of file");
                scanf("%s",dir[i].fname[dir[i].filecnt]);
                printf("\ncreated");
                dir[i].filecnt++;
                break;
            }
        }
        if(i==dcnt){
            printf("\nnot found");
            break;
        }
        break;
        case 3:int flag=0; printf("\nenter name of directory");
         scanf("%s",d);
        for(int i=0;i<dcnt;i++){
            if(strcmp(d,dir[i].dname)==0){
                  printf("\nenter name of file");
                scanf("%s",f);
                for(int k=0;k<dir[i].filecnt;k++){
              if(strcmp(f,dir[i].fname[k])==0){
                printf("\nfile deleted");
                  strcpy(dir[i].fname[k],dir[i].fname[dir[i].filecnt-1]);
                  dir[i].filecnt--;
                  flag++;
                  break;
              }}}
                }
                if(!flag){
                    printf("\n not found");
                }
                break;
            case 4: if(!dcnt) {
                printf("\n empty directory ");
                break;
            }
            printf("\ndirectories     files\n");
            for(int i=0;i<dcnt;i++){
                printf("%s      ",dir[i].dname);
                for(int j=0;j<dir[i].filecnt;j++){
                    printf("%s      ",dir[i].fname[j]);
                    
                }
                printf("\n");
            }
            break;
            case 5: exit(0);
        
    }
}
    return 0;
}
