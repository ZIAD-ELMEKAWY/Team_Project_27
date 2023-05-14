#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "Student.h"
#include "List.h"
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

    }
    else
    {
        printf("Invalid password. Exiting student mode...\n");
    }
}

int  Student_Login_Check(int Student_ID, char* Student_Passowrd)
{
    int status =0;

    if ((isIDExist(Student_ID) == 1) && (isIDExist(Student_Passowrd) == 1))  //Modification : there is no function for Check Student Password
    {
        status = 1;
    }
    else
    {
        status = 0;
    }

    return status ;
}


void Student_View_Record (int Student_ID)   // Function of (View_student_record) in [list.h] will print the record after pass id of student
{
    View_student_record(Student_ID);        // if the function will print inside it
}


char Student_Edit_Name(char* Student_Edit_Name[])
{
    printf("Please Enter your name : ");
    gets(Student_Edit_Name);
    // Function To Edit Student Name isn't valid Now
}


char Student_Edit_Paasword(char* Student_Edit_Paasword)
{
    int pass = 0;
    printf("Enter your New Password : ");
    scanf("%c",pass);
// Function To Edit Student Name isn't valid Now
    Motion();
    printf("Your Password is Modified Successfully \n");
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
