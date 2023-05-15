#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "List.h"
#include "Admin.h"
#include "Student.h"
/**
* @file     Student.c
* @version  20.03
* @brief    Student Module
* @details  This file contains the student module Source code
* @Author   Ziad_Elmekawy
**/

static char StuPassword[MAX_PASSWORD_LENGTH] = "1234";        // for edit name function
static char StuName[MAX_PASSWORD_LENGTH] = "Ziad Elmekawy" ;  // for edit password function
static char StuPass[MAX_PASSWORD_LENGTH] = "abc123" ;  // for student login function


int  Student_Login_Check(void)
{
    char *Student_Password = (char*) malloc(strlen(StuPass)+1);
    int status =0;

    printf("Enter your ID : ");
    scanf ("%d", &StudentId);
    printf("Enter your Password: ");
    fgets(Student_Password, MAX_PASSWORD_LENGTH , stdin);
    Student_Password[strcspn(Student_Password, "\n")] = '\0';
    strncpy(StuPass , Student_Password , MAX_PASSWORD_LENGTH);


    if ( isIDExist(StudentId , Student_Password ) == 1 )
    {
        status = 1;
    }
    else
    {
        status = 0;
    }

    return status ;
}


void Student_View_Record (int Student_ID)
{
    List_viewRecord( NULL, StudentId);
}


void Student_Edit_Name(void)
{
    char *StudentName = (char*) malloc(strlen(StuName)+1);
    printf("Please Enter your name : ");
    fgets(StudentName , MAX_NAME_LENGTH , stdin);
    StudentName[strcspn(StudentName, "\n")] = '\0';
    strncpy(StuName , StudentName , MAX_NAME_LENGTH);
    // LS_Edit_Name (StudentId , StudentName);
    Motion();
    printf("Your Name is Modified Successfully \n");
}


void Student_Edit_Paasword(void)
{
    char *StudentPassword = (char*) malloc(strlen(StuPassword)+1);
    printf("Enter your New Password : ");
    fgets(StudentPassword, MAX_PASSWORD_LENGTH , stdin);
    StudentPassword[strcspn(StudentPassword, "\n")] = '\0';
    strncpy(StuPassword , StudentPassword , MAX_PASSWORD_LENGTH);
    // LS_Edit_Password (StudentId , StudentPassword);
    Motion();
    printf("Your Password is Modified Successfully \n");
}


void Motion(void)
{
    printf("Please wait ");
    for(int UserPassIndex = 0; UserPassIndex < 15; UserPassIndex++)
    {
        printf(".");
        Sleep(100);
    }
    printf("\n");
}
