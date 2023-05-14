#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "student.h"
#include "list.h"

int main()
{
    int modeChoice;

    printf("Student Record System\n");
    printf("1. Admin Mode\n");
    printf("2. Student Mode\n");
    printf("Choose a mode (1-2): ");
    fflush(stdin);
    scanf("%d", &modeChoice);
    fflush(stdin);

    switch (modeChoice)
    {
    case 1:
        if (Validate_Admin_Password())
        {
            int adminChoice;

            printf("\nAdmin Mode\n");
            printf("Choose an option (1-6): \n");
            printf("1. Add student record\n");
            printf("2. Remove student record\n");
            printf("3. View student record\n");
            printf("4. View all records\n");
            printf("5. Edit admin password\n");
            printf("6. Edit student grade\n");
            fflush(stdin);
            scanf("%d", &adminChoice);
            fflush(stdin);

            switch (adminChoice)
            {
            case 1:
                Add_Student_Record();
                break;
            case 2:
                Remove_StudentR_ecord();
                break;
            case 3:
                View_Student_Record();
                break;
            case 4:
                View_All_Records();
                break;
            case 5:
                Edit_Admin_Password();
                break;
            case 6:
                Edit_Student_Grade();
                break;
            default:
                printf("Invalid option. Exiting admin mode...\n");
                break;
            }
        }
        else
        {
            printf("Invalid password. Exiting admin mode...\n");
        }
        break;
    case 2:

        if (1 == Student_Login_Check(1, 1))
        {
            int StudentChoice;

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
                Student_View_Record(1);
                break;
            case 2:
                Student_Edit_Name();
                break;
            case 3:
                Student_Edit_Passowrd();
                break;
            case 4:
                Student_Mode();
                break;
            default:
                printf("Invalid option. Exiting student mode...\n");
                break;
            }
        }
        else
        {
            printf("Invalid password. Exiting student mode...\n");
        }
        break;
    default:
        printf("Invalid mode choice. Exiting...\n");
        break;
    }

    return 0;
}
