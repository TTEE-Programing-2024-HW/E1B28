#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void afunction();
void bfunction();
void cfunction();
void dfunction();
void efunction();
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
                fflush(Stdin);
                choice = getch();
                switch (ch)
                {
                case 'a':
                case 'A':
                    /* code */
                    break;
                case 'b':
                case 'B':
                    break;
                case 'c':
                case 'C':
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
void afunction(){}
void bfunction(){}
void cfunction(){}
void dfunction(){}
void efunction(){}
