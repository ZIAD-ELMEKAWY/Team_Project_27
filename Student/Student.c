#include "Student.h"

/**
* @file     Student.c
* @version  20.03
* @brief    Student Module
* @details  This file contains the student module Source code
* @Author   Ziad_Elmekawy
**/


int  Student_Login_Check (int Student_ID , char* Student_Passowrd)
{
    int status ;
    if ((Student_ID== 1) && (Student_Passowrd == 1))
    {
        status = 1;
    }
    else
    {
        status = 0;
    }
    return status ;
}
