#include <stdio.h>
#include <stdlib.h>
#include "Admin.h"
#include "Student.h"


/**
* @file     main.c
* @version  20.03
* @brief    main Module
* @details  This file contains the main module Source file.
* @Author   Ziad_Elmekawy
**/

int main()
{
    int modeChoice;               /**** Mode Choise ****/

    printf("Student Record System\n");
    printf("1. Admin Mode\n");
    printf("2. Student Mode\n");
    printf("Choose a mode (1-2): ");
    fflush(stdin);
    scanf("%d", &modeChoice);
    fflush(stdin);

    if(modeChoice == 1)         /**** Admin Choice ****/
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
            addStudentRecord();
            break;
        case 2:
            removeStudentRecord();
            break;
        case 3:
            viewStudentRecord();
            break;
        case 4:
            viewAllRecords();
            break;
        case 5:
            editAdminPassword();
            break;
        case 6:
            editStudentGrade();
            break;
        default:
            printf("Invalid option. Exiting admin mode...\n");
            break;
        }
    }
    else if(modeChoice == 2)    /*** Student Choice ***/
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
            Student_View_Record();
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
    else                        /*** Invalid Choice ****/
    {
        printf("Invalid value, Sorry...\n");
    }
    return 0;

}

