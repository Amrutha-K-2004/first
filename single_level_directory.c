//SINGLE-LEVEL-DIRECTORY IN OPERATING SYSTEMS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct {
    char dirname[100],file[100][100];
    int fcnt;
}dir;

int main()
{
    dir.fcnt=0;char name[100];
    int flag=0;
    int choice,i;
    while(1){
    printf("\n1. insert a file\n2. delete a file \n3. list\n4. exit\n(enter your choice) ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\nenter the name of file ");
        scanf("%s",dir.file[dir.fcnt]);
        dir.fcnt++;
        break;
        case 2: flag=0;
        printf("\nenter the name of file ");
        scanf("%s",name);
        for(  i=0;i<dir.fcnt;i++){
            if(strcmp(dir.file[i],name)==0){
                printf("\n file deleted ");
                strcpy(dir.file[i],dir.file[dir.fcnt-1]);
                dir.fcnt--;
                flag++;
                break;
            }
        }
        //printf("      %d",flag);
        if(!flag){
        printf("\n file not found");}
        break;
        
        case 3:   if(!dir.fcnt)
        {
            printf("\n file is empty");
            break;
        }
        for(int i=0;i<dir.fcnt;i++){
            printf("%s\n",dir.file[i]);
        }
        break;
        case 4: exit(0);
    }
}
    return 0;
}
