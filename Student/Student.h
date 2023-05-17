/*** Public Interfaces ***/
/**
* @file     Student.c
* @version  20.03
* @brief    Student Module
* @details  This file contains the student module Header files.
* @Author   Ziad_Elmekawy
**/

#ifndef _STUDENT_H_
#define _STUDENT_H_
#define MAX_PASSWORD_LENGTH 50
#define MAX_NAME_LENGTH 60

int StudentId ;


int  Student_Login_Check  (struct n* start);  // To check Student Login
void Student_View_Record   ( struct n* start , int Student_ID);         // To view Student Record
void Student_Edit_Name     (struct n* start) ;             // Edit student Name
void Student_Edit_Paasword (struct n* start) ;   // Edit student passowrd
void Motion (void);              // For motion not more ^_^

#endif


