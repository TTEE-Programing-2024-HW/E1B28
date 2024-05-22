#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 20
void afunction();
void bfunction();
void cfunction();
void dfunction();
void efunction();
struct info 
{
    char name[MAX];
    char id[6];
    int math;
    int phy;
    int eng;
};
struct info student[MAX];
int temp=0;
float avg[MAX]={0};
int main(void)
{
    int password, count = 0;
    char ch, choice;
    printf("  ^,,,^\n"); // ญฑชOณ]ญp
    printf(" (กEuกE)\n");
    printf("|กรU Uกรกรกรกรกรกรกรกรกรกรกร|\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("| *E1B28                    |\n");
    printf("|                           |\n");
    printf("| *program_hw_3             |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|\"click any key to continue\"|\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                           |\n");
    printf("|                2024/5/21  |\n");
    printf("|___________________________|\n");
    ch = getch();
    printf("enter password:");
    fflush(stdin);
    scanf("%d", &password);

    for (;;)
    {
        if (password == 2024)
        {
            for (;;)
            {   
                system("cls");
                printf("----------[Grade System]----------\n");
                printf("| a. Enter student grades        |\n");
                printf("| b. Display student grades      |\n");
                printf("| c. Search for student grades   |\n");
                printf("| d. Grade ranking               |\n");
                printf("| e. Exit system                 |\n");
                printf("----------------------------------\n");
                fflush(stdin);
                choice = getch();
                switch (choice)
                {
                case 'a':
                case 'A':
                    afunction();
                    break;
                case 'b':
                case 'B':
                    bfunction();
                    break;
                case 'c':
                case 'C':
                    cfunction();
                    break;
                case 'd':
                case 'D':
                    break;
                case 'e':
                case 'E':
                    break;

                default:
                    break;
                }
            }
        }
        else
        {
            count++;
            if (count == 3)
            {
                printf("wrong password--%dtimes end program", count);
                system("pause");
                return 0;
            }
            printf("wrong password--%dtimes,enter again:", count);
            scanf("%d", &password);
        }
    }
}
void afunction(void){
    int i,n;
    system("cls");
    printf("enter_n_student_grade(5~10):");
    fflush(stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("---------%d-student---------\n",i+1);
        scanf("%s %s %d %d %d",&student[temp+i].name,&student[temp+i].id,&student[temp+i].math,&student[temp+i].phy,&student[temp+i].eng);
        for(;;){
            if(strlen(student[temp+i].id)==6){
                break;
            }else{
                printf("format wrong (ID):");
                fflush(stdin);
                scanf("%s",&student[temp+i].id);
                continue;
            }}
            for(;;){
                if(0<=student[temp+i].math && student[temp+i].math<=100){
                break;
            }else{
                printf("format wrong (Math 0~100):");
                fflush(stdin);
                scanf("%d",&student[temp+i].math);
                continue;
            }
            }
            for(;;){
                if(0<=student[temp+i].phy && student[temp+i].phy<=100){
                break;
            }else{
                printf("format wrong (Physics 0~100):");
                fflush(stdin);
                scanf("%d",&student[temp+i].phy);
                continue;
            }
            }
            for(;;){
                if(0<=student[temp+i].eng && student[temp+i].eng<=100){
                break;
            }else{
                printf("format wrong (English 0~100):");
                fflush(stdin);
                scanf("%d",&student[temp+i].eng);
                continue;
            }
            }
        
       

    }
    temp+=n;
    for(i=0;i<temp;i++){
        avg[i]=((float)(student[i].math+student[i].phy+student[i].eng))/3;
    }
}  
void bfunction(void){
    int i;
    char ch;
    system("cls");
    printf("No.|Name  |  ID  |Math|Physics|English|avg_grade\n");
    for(i=0;i<temp;i++){
        printf("%2d  %-6s %-6s %3d   %3d     %3d     %3.1f\n",i+1,student[i].name,student[i].id,student[i].math,student[i].phy,student[i].eng,avg[i]);
    }
    ch=getch();
}
void cfunction(){
    int i,target=-1;
    char ch,search[MAX];
    system("cls");
    printf("search:");
    fflush(stdin);
    scanf("%s",search);
    for(i=0;i<temp;i++){
        if( strcmp(student[i].name,search) == 0 ){
            target=i;
            break;
        }
    }
    if(target == -1){
        printf("not found data!");
    }else{
        printf("|Name  |  ID  |Math|Physics|English|avg_grade\n");
        printf(" %-6s %-6s %3d   %3d     %3d     %3.1f\n",student[target].name,student[target].id,student[target].math,student[target].phy,student[target].eng,avg[target]);
    }
    ch=getch();
}
void dfunction(){}
void efunction(){}
