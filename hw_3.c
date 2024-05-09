#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 20

void menu();
void afunction(char main[10][10]);
char bfunction(char main[10][10]);
char cfunction(char main[10][10]);
void dfunction();
int main()
{

    int password, count = 0, i, j, x, y;
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
    system("cls");
    printf("enter password:");
    fflush(stdin);
    scanf("%d", &password);
    for (;;)
    {
        if (password == 2024)
        {
            system("cls");
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
                    bfunction(seat);

                    break;
                case 'c':
                case 'C':
                    cfunction(seat);
                    break;
                case 'd':
                case 'D':
                    printf("Continue? (y/n)");
                    for (;;)
                    {
                        ch = getche();
                        if (ch == 89 || ch == 121)
                        {
                            break;
                        }
                        else if (ch == 78 || ch == 110)
                        {
                            system("pause");
                            return 0;
                        }
                        printf("\n輸入正確格式!(y/n):");
                    }
                    break;
                default:
                    printf("輸入正確格式");
                    break;
                }
            }
        }
        else
        {
            system("cls");
            count++;
            if (count == 3)
            {
                printf("密碼錯誤%d次結束程式", count);
                system("pause");
                return 0;
            }
            printf("密碼錯誤%d次，再輸入一次:", count);
            fflush(stdin);
            scanf("%d", &password);
        }
    }
}
void afunction(char main[10][10])
{
    system("cls");
    int i, j;
    char ch;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    ch = getch();
}
char bfunction(char main[10][10])
{
    int x, y, i, j;
    char ch;
    system("cls");
    printf("seats(1~4):");
    ch = getche();
    switch (ch)
    {
    case '1':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if (main[x][y] == '-')
            {
                main[x][y] = '@';
                break;
            }
        }
        break;
    case '2':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                break;
            }
        }
        break;
    case '3':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x][y + 2] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x][y + 2] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-') && (main[x][y - 2] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                main[x][y - 2] = '@';
                break;
            }
        }
        break;
    case '4':
        for (;;)
        {
            srand(time(NULL));
            x = rand() % 9 + 1;
            y = rand() % 9 + 1;
            if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x][y + 2] == '-') && (main[x][y + 3] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x][y + 2] = '@';
                main[x][y + 3] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y - 1] == '-') && (main[x][y - 2] == '-') && (main[x][y - 3] == '-'))
            {
                main[x][y] = '@';
                main[x][y - 1] = '@';
                main[x][y - 2] = '@';
                main[x][y - 3] = '@';
                break;
            }
            else if ((main[x][y] == '-') && (main[x][y + 1] == '-') && (main[x + 1][y] == '-') && (main[x + 1][y + 1] == '-'))
            {
                main[x][y] = '@';
                main[x][y + 1] = '@';
                main[x + 1][y] = '@';
                main[x + 1][y + 1] = '@';
                break;
            }
        }
        break;
    default:
        break;
    }
    system("cls");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("是否滿意座位(y/n)");
    ch = getch();
    for (;;)
    {
        if (ch == 'n' || ch == 'N')
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (main[i][j] == '@')
                    {
                        main[i][j] = '-';
                    }
                }
            }
            system("cls");
            break;
        }
        else if (ch == 'y' || ch == 'Y')
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (main[i][j] == '@')
                    {
                        main[i][j] = '*';
                    }
                }
            }
            break;
        }
        else
        {
            printf("輸入正確格式(y/n)");
            ch = getch();
        }
    }
}
char cfunction(char main[10][10])
{
    system("cls");
    int i, j;
    char ch, ch2;
    int num[MAX] = {0}, num1[MAX] = {0};
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("輸入座位(ex.1-2,2-9):");

    i = 0;
    while (1)
    {

        scanf("%d%c%d%c", &num[i], &ch, &num1[i], &ch2);
        num[i] = 10 - num[i];
        if ((num[i] > 9 || num[i] <= 0) || (num1[i] > 9 || num1[i] <= 0) || ch != '-' || main[num[i]][num1[i]] == '*')
        {
            printf("輸入格式錯誤或重位(ex.1-2,2-9):");
            fflush(stdin);
            continue;
        }

        i++;
        if (ch2 != ',')
            break;
    }

    for (j = 0; j < i; j++)
    {
        main[num[j]][num1[j]] = '@';
    }
    system("cls");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("是否滿意座位(y/n)");
    ch = getch();
    for (;;)
    {
        if (ch == 'n' || ch == 'N')
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (main[i][j] == '@')
                    {
                        main[i][j] = '-';
                    }
                }
            }
            system("cls");
            break;
        }
        else if (ch == 'y' || ch == 'Y')
        {
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (main[i][j] == '@')
                    {
                        main[i][j] = '*';
                    }
                }
            }
            break;
        }
        else
        {
            printf("輸入正確格式(y/n)");
            ch = getch();
        }
    }
}
