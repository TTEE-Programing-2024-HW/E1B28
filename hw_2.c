#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int password, count = 0, t;
char ch, ch2;
int main(void)
{
    printf("  ^,,,^\n"); // ���O�]�p
    printf("  (�Eu�E)\n");
    printf("|��U U�áááááááá�|\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("| *E1B28�E��          |\n");
    printf("|                       |\n");
    printf("| *�{���]�phw_2         |\n");
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
        printf("|  A-a   �e�X�����T���� |\n");
        printf("|                       |\n");
        printf("|  B-b   ��ܭ��k��     |\n");
        printf("|                       |\n");
        printf("|  C-c   ����           |\n");
        printf("|_______________________|\n");
        for (;;)
        {
            fflush(stdin);
            ch = getch();
            if (ch == 65 || ch == 97 || ch == 66 || ch == 98 || ch == 67 || ch == 99)
                break;
            printf("��J���T�榡!\n");
        }

        if (ch == 65 || ch == 97)
        {
            int i, j, k;
            system("cls");
            printf("��J�@��a��n���r��:");
            fflush(stdin);
            scanf("%c", &ch2);
            while (ch2 < 97 || 110 < ch2)
            {
                printf("\n�榡���~!��J�@��a��n���r��:");
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
            printf("��J�@��1~9���Ʀrn:");
            for (;;)
            {
                fflush(stdin);
                scanf("%d", &n);
                if (1 <= n && n <= 9)
                    break;
                printf("��J���T�榡!(1~9):\n");
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
                printf("\n��J���T�榡!(y/n):");
            }
        }
    }
}