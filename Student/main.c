#include <stdio.h>
#include <stdlib.h>
#include "Admin.h"
#include "Student.h"
#include "List.h"

/**
* @file     main.c
* @version  20.03
* @brief    main Module
* @details  This file contains the main module Source file.
* @Author   Ziad_Elmekawy
**/



int main()
{
    int modeChoice;
    /**** Mode Choice Start ****/
    printf("Student Record System\n");
    printf("1. Admin Mode\n");
    printf("2. Student Mode\n");
    printf("Choose a mode (1-2): ");
    fflush(stdin);
    scanf("%d", &modeChoice);
    fflush(stdin);
    /**** Mode Choice Start ****/

    if(modeChoice == 1)         /**** Admin Choice of Mode Choice****/
    {

        int adminChoice;
        int ADStaus = 0 ;     /*** For return of Validate_Admin_Password ***/
        /**** Admin login check Start***/
        ADStaus = Validate_Admin_Password();
        if (1 == ADStaus)
        {
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
        else
        {
            printf("Invalid password. Exiting Admin mode...\n");
        }
        /**** Admin login check End***/
    }
    else if(modeChoice == 2)    /*** Student Choice of Mode Choice***/
    {

        int StudentChoice;

        /**** Student login check Start***/
        if ( Student_Login_Check() == 1)
        {
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
                Student_View_Record(StudentId);
                break;
            case 2:
                Student_Edit_Name();
                break;
            case 3:
                Student_Edit_Passowrd();
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
            printf("Invalid Information. Exiting student mode...\n");
        }
        /**** Student login check End***/
    }
    else                        /*** Invalid Choice of Mode Choice****/
    {
        printf("Invalid value, Sorry...\n");
    }
    return 0;

}

