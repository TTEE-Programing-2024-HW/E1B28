#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int password, count = 0;
    char ch;
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
            system("pause");
            return 0;
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