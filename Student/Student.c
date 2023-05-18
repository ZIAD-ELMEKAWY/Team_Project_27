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

#define MAX_PASSWORD_LENGTH 30
#define MAX_PASSWORD_ATTEMPTS 3

static char StuPassword[MAX_PASSWORD_LENGTH] = "1234";        // for edit name function
static char StuName[MAX_PASSWORD_LENGTH] = "Ziad Elmekawy" ;  // for edit name function
static char StuPass[MAX_PASSWORD_LENGTH] = "abc123" ;  // for student login function
static char loginPassword[MAX_PASSWORD_LENGTH] = "1234";
static int Student_Id = 1234 ;

int  Student_Login_Check(struct n* start)
{
    int status =0;
    int attempts = 0;
    char Student_Password[100];

    while (attempts < MAX_PASSWORD_ATTEMPTS)
    {
        printf("enter id and password\n");
        scanf("%d",&Student_Id);
        _flushall();
        scanf("%s",Student_Password);
        if (List_check_logIn(start,Student_Id,Student_Password)==1)
        {
            status= 1 ;
            break ;
        }
        else
        {
            printf("not exsist\n");
            attempts++ ;
        }

    }
    return status ;
}


void Student_View_Record   ( struct n* start , int Student_ID)
{
    printf("enter id you want to check");
    scanf("%d",&Student_ID);
    List_viewRecord( start, Student_Id);
}


void Student_Edit_Name (struct n* start)
{
    char StudentNewName[100];
    printf("enter id : ");
    scanf("%d",&Student_Id);
    printf("enter new Name: ");
    _flushall();
    gets(StudentNewName);
    List_editStudent_name(start , Student_Id , StudentNewName);
    Motion();
    printf("Your Name is Modified Successfully \n");
}


void Student_Edit_Paasword(struct n* start)
{
    char StudentOldPass [100], StudentNewPass[100];
    printf("enter old pass ");
    _flushall();
    gets(StudentOldPass);
    printf("enter new ");
    _flushall();
    gets(StudentNewPass);
    List_editStudent_password( start , StudentOldPass , StudentNewPass);
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
