#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void menu();
void afunction(char main[10][10]);
char bfunction(char main[10][10]);
void cfunction();
void dfunction();
int main()
{

    int password, count = 0, i, j, x, y;
    char ch, ch2;

    printf("  ^,,,^\n"); // ���O�]�p
    printf(" (�Eu�E)\n");
    printf("|��U U�áááááááá�|\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("| *E1B28�E��          |\n");
    printf("|                       |\n");
    printf("| *�{���]�phw_3         |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|    \"�����N���~��\"     |\n");
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
            printf("�w��!�����N���~��");
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
                    cfunction();
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
                        printf("\n��J���T�榡!(y/n):");
                    }
                    break;
                default:
                    printf("��J���T�榡");
                    break;
                }
            }
        }
        else
        {
            count++;
            if (count == 3)
            {
                printf("\n�K�X���~%d�������{��", count);
                system("pause");
                return 0;
            }
            printf("\n�K�X���~%d���A�A��J�@��:", count);
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
            if (main[x][y] !='*')
            {
                main[x][y] = '@';
                break;
            }
        }
        break;
    case '2':
        /* code */
        break;
    case '3':
        /* code */
        break;
    case '4':
        /* code */
        break;
    default:
        break;
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", main[i][j]);
        }
        printf("\n");
    }
    printf("�O�_���N�y��(y/n)");
    ch = getch();
    for (;;)
    {
        if (ch == 'n' || ch == 'N')
        {   
            system("cls");
            break;
        }
        else if (ch == 'y' || ch == 'Y')
        {
            return main[x][y];
            break;
        }
        else{
            printf("��J���T�榡(y/n)");
            ch = getch();
        }
    }
}
void cfunction()
{
    printf("cfunction!");
}
