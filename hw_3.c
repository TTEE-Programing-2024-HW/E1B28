#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 20

void menu(); // 宣告副程式
void afunction(char main[10][10]);
char bfunction(char main[10][10]);
char cfunction(char main[10][10]);
int main()
{

    int password, count = 0, i, j, x, y;
    char ch, ch2;

    printf("  ^,,,^\n"); // 面板設計
    printf(" (‧u‧)\n");
    printf("|￣U U￣￣￣￣￣￣￣￣￣￣￣|\n");
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
    printf("|                2024/5/7   |\n");
    printf("|___________________________|\n");
    ch = getch();
    char seat[10][10] = // 座位表設計
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
    srand(time(NULL)); // 隨機選位子
    for (i = 0; i < 10; i++)
    {
        x = rand() % 9 + 1;
        y = rand() % 9 + 1;
        for (;;)
        {
            if (seat[x][y] == '*')
            {
                srand(time(NULL));
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
    printf("enter password:"); // 密碼2024
    fflush(stdin);
    scanf("%d", &password);
    for (;;)
    {
        if (password == 2024)
        {
            system("cls");
            printf("wellcome!click any key to continue");
            ch = getch();
            for (;;)
            {
                system("cls");
                printf("============================\n"); // 選位介面
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
                        printf("\nenter correct format!(y/n):");
                    }
                    break;
                default:
                    printf("enter correct format!");
                    ch = getch();
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
                printf("wrong password--%dtimes  end program", count);
                system("pause");
                return 0;
            }
            printf("wrong password--%dtimes,enter again:", count);
            fflush(stdin);
            scanf("%d", &password);
        }
    }
}
void afunction(char main[10][10]) // 顯示座位表
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
char bfunction(char main[10][10]) // 選位(1~4)
{
    int x, y, i, j;
    char ch;
    system("cls");
    printf("seats(1~4):");
    for (;;)
    {
        ch = getche();
        if ('1' <= ch && ch <= '4')
        {
            system("cls");
            printf("%c seats:\n", ch);
            break;
        }

        printf("\nenter correct format!(1~4)");
    }

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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("agree?(y/n)");
    ch = getch();
    for (;;)
    {
        if (ch == 'n' || ch == 'N') // 將@改成-
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
        else if (ch == 'y' || ch == 'Y') // 將@改成*
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
            printf("\nenter correct format!(y/n)");
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
    printf("enter seats(ex.1-2,2-9):");

    i = 0;
    while (1) // 輸入選位
    {

        scanf("%d%c%d%c", &num[i], &ch, &num1[i], &ch2);
        num[i] = 10 - num[i];
        if ((num[i] > 9 || num[i] <= 0) || (num1[i] > 9 || num1[i] <= 0) || ch != '-' || main[num[i]][num1[i]] == '*')
        {
            printf("Enter the correct format or there is already a seat!(ex.1-2,2-9):");
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
    printf("agree?(y/n)");
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
            printf("Enter the correct format!(y/n)");
            ch = getch();
        }
    }
}
