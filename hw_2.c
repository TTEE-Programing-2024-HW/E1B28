#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int password,count=0,t;
char ch,ch2;
int main(void){
    printf("  ^,,,^\n");                   //面板設計 
	printf("  (‧u‧)\n");
	printf("|￣U U￣￣￣￣￣￣￣￣￣|\n");
	printf("|                       |\n"); 
	printf("|                       |\n"); 
	printf("| *E1B28余仲恩          |\n"); 
	printf("|                       |\n"); 
	printf("| *程式設計hw_2         |\n");
	printf("|                       |\n");
	printf("|                       |\n");
	printf("|            2024/4/25  |\n");
	printf("|_______________________|\n");
    printf("\n");
    for(;;){
        if(count==3){
            printf("3 times wrong password!\n");
            printf("close program\n");
            system("pause");
            return 0;
        }
        printf("enter password:");
        scanf("%d",&password);
        if(password==2023){
            break;
        }
        else{
        printf("wrong password!");
        printf("--%dtimes\n",count+1);
        count++;
        }
    }
    system("cls");
    printf("________________________\n");
    printf("|                       |\n");
    printf("|  A-a   畫出直角三角形 |\n");
    printf("|                       |\n"); 
	printf("|  B-b   顯示乘法表     |\n");
	printf("|                       |\n");
	printf("|  C-c   結束           |\n");
	printf("|_______________________|\n");
    fflush(stdin);
    ch=getch();
    if(ch==65||ch==97){
        int i,j,k;
        system("cls");
        printf("輸入一個a到n的字元:");
        scanf("%c",&ch2);
        while(ch2<=97||110<=ch2){
            printf("格式錯誤!輸入一個a到n的字元:");
            scanf("%c",&ch2);
        }                                                  //t=2
        t=ch2-97;                                          //  c
        for(i=0;i<=t;i++){                                 // bc
            for(j=i;j<t;j++){                              //abc
                printf(" "); 
            }  
            for(j=0,k=0;j<=i;j++){
                printf("%c\n",ch2-j+k);
                k++;
            }
            printf("%c\n",ch2-j+k);
        } 
        
        
    }
    if(ch==66||ch==98)
    if(ch==67||ch==99)

    system("pause");
    return 0;
}