#include "Student.h"

<<<<<<< HEAD
int Student_Login_Check (int Student_ID , char Student_Passowrd)
=======
/**
* @file     Student.c
* @version  20.03
* @brief    Student Module
* @details  This file contains the student module Source code
* @Author   Ziad_Elmekawy
**/


int  Student_Login_Check (int Student_ID , char Student_Passowrd)
>>>>>>> 0a560b7efec0aab5faff45642e470689db2e093c
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
