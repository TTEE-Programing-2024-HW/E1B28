#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int password, count = 0, t;
char ch, ch2;
int main(void)
{
    printf("  ^,,,^\n"); // 面板設計
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
    for (;;)
    {
        if (count == 3)
        {
            printf("3 times wrong password!\n");
            printf("close program\n");
            system("pause");
            return 0;
        }
        printf("enter password:");
        fflush(stdin);
        scanf("%d", &password);
        if (password == 2023)
        {
            break;
        }
        else
        {
            printf("wrong password!");
            printf("--%dtimes\n", count + 1);
            count++;
        }
    }
    while (1)
    {
        system("cls");
        printf("________________________\n");
        printf("|                       |\n");
        printf("|  A-a   畫出直角三角形 |\n");
        printf("|                       |\n");
        printf("|  B-b   顯示乘法表     |\n");
        printf("|                       |\n");
        printf("|  C-c   結束           |\n");
        printf("|_______________________|\n");
        for (;;)
        {
            fflush(stdin);
            ch = getch();
            if (ch == 65 || ch == 97 || ch == 66 || ch == 98 || ch == 67 || ch == 99)
                break;
            printf("輸入正確格式!\n");
        }

        if (ch == 65 || ch == 97)
        {
            int i, j, k;
            system("cls");
            printf("輸入一個a到n的字元:");
            fflush(stdin);
            scanf("%c", &ch2);
            while (ch2 < 97 || 110 < ch2)
            {
                printf("\n格式錯誤!輸入一個a到n的字元:");
                fflush(stdin);
                scanf("%c", &ch2);
            }
            t = ch2 - 97;
            system("cls");
            for (i = 0; i <= t; i++)
            {
                for (j = i; j < t; j++)
                {
                    printf(" ");
                }
                for (j = 0, k = 0; j <= i; j++)
                {
                    printf("%c", ch2 - i + k);
                    k++;
                }
                printf("\n");
            }
            ch = getch();
        }
        else if (ch == 66 || ch == 98)
        {
            int n, a, b;
            system("cls");
            printf("輸入一個1~9的數字n:");
            for (;;)
            {
                fflush(stdin);
                scanf("%d", &n);
                if (1 <= n && n <= 9)
                    break;
                printf("輸入正確格式!(1~9):\n");
            }
            system("cls");
            for (a = 1; a <= n; a++)
            {
                for (b = 1; b <= n; b++)
                {
                    printf("%2d*%d=%2d", a, b, a * b);
                }
                printf("\n");
            }
            ch = getch();
        }
        else if (ch == 67 || ch == 99)
        {
            printf("Continue? (y/n)");
            for(;;){
                fflush(stdin);
                ch=getche();
                if (ch==89||ch==121){
                    break;
                }
                else if(ch==78||ch==110){
                    system("pause");
                    return 0;
                }    
                printf("\n輸入正確格式!(y/n):");
            }
        }
    }
}