#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void menu();
void afunction(char main[10][10]);
void bfunction();
void cfunction();
void dfunction();
int main()
{

    int password, count = 0, i, j,x,y;
    char ch, ch2;

    printf("  ^,,,^\n"); // 面板設計
    printf(" (‧u‧)\n");
    printf("|￣U U￣￣￣￣￣￣￣￣￣|\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("| *E1B28余仲恩          |\n");
    printf("|                       |\n");
    printf("| *程式設計hw_3         |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|    \"按任意鍵繼續\"     |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|            2024/3/21  |\n");
    printf("|_______________________|\n");
    ch = getch();
    char seat[10][10] =
        {
            {'\\', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
            {'9', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'8', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'7', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'6', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'5', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'4', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'3', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'2', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
            {'1', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        for (;;)
        {
            if (seat[x][y] == '*')
            {
                x = rand() % 9 + 1;
                y = rand() % 9 + 1;
            }
            else
            {
                break;
            }
        }
        seat[x][y] = '*';
    }

    printf("enter password:");
    fflush(stdin);
    scanf("%d", &password);
    for (;;)
    {
        if (password == 2024)
        {
            printf("歡迎!按任意鍵繼續");
            ch = getch();
            for (;;)
            {
                system("cls");
                printf("============================\n");
                printf("   A.Available seats\n");
                printf("   B.Arrange for you\n");
                printf("   C.Choose by yourself\n");
                printf("   D.Exit\n");
                printf("============================\n");
                ch = getch();
                switch (ch)
                {
                case 'a':
                case 'A':
                    afunction(seat);
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
                    dfunction();
                    break;
                default:
                    printf("輸入正確格式");
                    break;
                }
                ch=getch();
            }
        }
        else
        {
            count++;
            if (count == 3)
            {
                printf("\n密碼錯誤%d次結束程式", count);
                system("pause");
                return 0;
            }
            printf("\n密碼錯誤%d次，再輸入一次:", count);
            fflush(stdin);
            scanf("%d", &password);
        }
    }
}
void afunction(char main[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
}
void bfunction()
{
    printf("bfunction!");
}
void cfunction()
{
    printf("cfunction!");
}
void dfunction()
{
    printf("dfunction!");
}
