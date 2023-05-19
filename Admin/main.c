#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "Student.h"
#include "List.h"

struct n *start = NULL;
int StudentId = 1234;

void clearScreen()
{
    system("cls");
}

void delay(int milliseconds)
{
    usleep(milliseconds * 1000); // usleep takes time in microseconds, so we multiply milliseconds by 1000
}

int main()
{

    int modeChoice;

    do
    {
        delay(2000);
        clearScreen();
        printf("*********Student Record System*********\n");
        printf("\n0. Finish the program \n");
        printf("1. Admin Mode\n");
        printf("2. Student Mode\n");
        printf("Choose a mode (1-2): ");
        fflush(stdin);
        scanf("%d", &modeChoice);
        fflush(stdin);
        /**** Mode Choice Start ****/
        if (modeChoice == 1) /**** Admin Choice of Mode Choice****/
        {

            int adminChoice;
            int ADStaus = 0; /*** For return of Validate_Admin_Password ***/
            /**** Admin login check Start***/
            ADStaus = Validate_Admin_Password();
            if (1 == ADStaus)
            {
                clearScreen();
                printf("\nAdmin Mode\n");
                printf("Choose an option (1-6): \n");
                printf("1. Add student record\n");
                printf("2. Remove student record\n");
                printf("3. View student record\n");
                printf("4. View all records\n");
                printf("5. Edit admin password\n");
                printf("6. Edit student grade\n");
                printf("7. Exit this mode\n");
                fflush(stdin);
                scanf("%d", &adminChoice);
                fflush(stdin);

                switch (adminChoice)
                {
                case 1:
                    clearScreen();
                    {
                        int n = List_GetUsedSize(start);
                        if (n < 10)
                        {
                            start = Add_Student_Record(start);
                            List_GetUsedSize(start);
                        }
                        else
                        {
                            printf("the list is full\n");
                        }
                        break;
                    }
                case 2:
                    clearScreen();
                    Remove_Student_Record(start);
                    break;
                case 3:
                    clearScreen();
                    View_Student_Record(start);
                    delay(3000);
                    break;
                case 4:
                    clearScreen();
                    View_All_Records(start);
                    delay(3000);
                    break;
                case 5:
                    clearScreen();
                    Edit_Admin_Password(start);
                    break;
                case 6:
                    clearScreen();
                    Edit_Student_Grade(start);
                    break;
                case 7:
                    main();
                    break;
                default:
                    clearScreen();
                    printf("Invalid option. Exiting admin mode...\n");
                    break;
                }
            }
            else
            {
                clearScreen();
                printf("Invalid password. Exiting Admin mode...\n");
            }
            /**** Admin login check End***/
        }
        else if (modeChoice == 2) /*** Student Choice of Mode Choice***/
        {

            int StudentChoice;

            /**** Student login check Start***/
            if (Student_Login_Check(start) == 1)
            {
                clearScreen();
                printf("\nStudent Mode\n");
                printf("Choose an option (1-4): \n");
                printf("1_ View your record    \n");
                printf("2_ Edit your Name      \n");
                printf("3_ Edit your Passowrd  \n");
                printf("4_ Go back to main     \n");
                fflush(stdin);
                scanf("%d", &StudentChoice);
                fflush(stdin);
                switch (StudentChoice)
                {
                case 1:
                    clearScreen();
                    Student_View_Record(start, StudentId);
                    delay(3000);
                    break;
                case 2:
                    clearScreen();
                    Student_Edit_Name(start);
                    break;
                case 3:
                    clearScreen();
                    Student_Edit_Paasword(start);
                    break;
                case 4:
                    main();
                    break;
                default:
                    printf("Invalid option. Exiting student mode...\n");
                    break;
                }
            }
            else
            {
                clearScreen();
                printf("Invalid Information. Exiting student mode...\n");
            }
            /**** Student login check End***/
        }
        else /*** Invalid Choice of Mode Choice****/
        {
            clearScreen();
            printf("Invalid value, Sorry...\n");
        }
    } while (modeChoice != 0);
    printf("\n ..... Thank you ..... \n");
    return 0;
}
