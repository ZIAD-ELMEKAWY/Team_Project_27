#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.h"
#include <windows.h>

/**
* @file     Student.c
* @version  20.03
* @brief    Student Module
* @details  This file contains the student module Source code
* @Author   Ziad_Elmekawy
**/

void Student_Mode()
{
    if (1== Student_Login_Check(1,1))
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
}

int Student_Login_Check (int Student_ID , char Student_Passowrd)
{
    int status =0;
    if ((Student_ID == 1) && (Student_Passowrd == 1))
    {
        status = 1;
    }
    else
    {
        status = 0;
    }
    return status ;
}

void Student_View_Record(int Student_ID)  // Student id isn't valid now
{
    if (1 == Student_Login_Check)
    {
        printf("your record : %d", Student_record);    /** Student record variable **/
    }
    else
    {

    }
}

char Student_Edit_Name(char* Student_Edit_Name[])
{
    if (1 == Student_Login_Check)
    {
        printf("Please Enter your name : ");
        gets(Student_Edit_Name);
    }
}
void Student_Edit_Passowrd(void)
{
    int pass = 0;
    printf("Enter your New Password : ");
    scanf("%c",pass);
    Motion();
    printf("Your Name is Modified Successfully \n");
}
void Motion (void)
{
    printf("Please wait ");
        for(int UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++)
        {
            printf(".");
            Sleep(100);
        }
        printf("\n");
}
