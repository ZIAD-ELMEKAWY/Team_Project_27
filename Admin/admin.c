/**
 * @file     Admin.c
 * @version  20.01
 * @brief    Admin Module
 * @details  This file contains the Admin module Source code
 * @Author   Abdelrhman_Ellawendi
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "List.h"
#include "Admin.h"
#include "Student.h"

#define MAX_PASSWORD_LENGTH 30
#define MAX_PASSWORD_ATTEMPTS 3

static char AdminPassword[MAX_PASSWORD_LENGTH] = "1234";

int Validate_Admin_Password()
{
    char adminPassword[MAX_PASSWORD_LENGTH];
    int attempts = 0;
    do
    {
        printf("Enter admin password: ");
        fgets(adminPassword, sizeof(adminPassword), stdin);
        adminPassword[strcspn(adminPassword, "\n")] = '\0';  // Remove trailing newline
        if (strcmp(adminPassword, AdminPassword) == 0)
        {
            return 1;  // Password is correct
            break;
        }
        else
        {
            printf("Invalid password. %d attempts remaining.\n", MAX_PASSWORD_ATTEMPTS - attempts - 1);
            attempts++;
        }
    } while (attempts < MAX_PASSWORD_ATTEMPTS);
    return 0;  // Password is incorrect or maximum attempts reached
}

/*********************************************************************************************/

void Edit_Admin_Password()
{
    char newPassword[MAX_PASSWORD_LENGTH];
    printf("Enter new admin password: ");
    fgets(newPassword, sizeof(newPassword), stdin);
    newPassword[strcspn(newPassword, "\n")] = '\0';  // Remove trailing newline
    strncpy(AdminPassword, newPassword, MAX_PASSWORD_LENGTH);
    Motion();
    printf("Admin password updated successfully.\n");
}

/*********************************************************************************************/

struct n *Add_Student_Record(struct n *start)
{
    char studunt_name[500];
    int total_grade;
    int student_ID;
    int student_age;
    char gender[10];
    char student_password[500];

    printf("Enter student name: ");
    _flushall();
    gets(studunt_name);
    printf("Enter total grade: ");
    scanf("%d", &total_grade);
    while (total_grade > 100)
    {
        printf("please enter grade less than or equal 100 \n");
        printf("Enter new grade: ");
        scanf("%d", &total_grade);
        getchar();  // Consume newline character
    }
    printf("Enter unique ID: ");
    scanf("%d", &student_ID);
    while (List_isIdExist(start, student_ID) == 1)  //if the id is exist 
    {
        printf("This id is exist, Please Enter another ID \n");
        scanf("%d", &student_ID);
    }
    printf("Enter age: ");
    scanf("%d", &student_age);
    printf("Enter gender (Male/Female): ");
    _flushall();
    gets(gender);
    printf("Enter password: ");
    _flushall();
    gets(student_password);
    start = List_Add_student_record(start, studunt_name, total_grade, student_ID, student_age, gender, student_password);
    Motion();
    printf("Student record added successfully.\n");
    return start;
}

/*********************************************************************************************/

void Remove_Student_Record(struct n *start)
{
    int studentId;
    printf("Enter student ID to remove: ");
    scanf("%d", &studentId);
    getchar();  // Consume newline character
    start = List_DeleteRecord(start, studentId);
    Motion();
    printf("Student record with id %d deleted successfully.\n", studentId);
}

/*********************************************************************************************/

void View_Student_Record(struct n *start)
{
    int studentId;
    printf("Enter student ID to view: ");
    scanf("%d", &studentId);
    getchar();  // Consume newline character
    Motion();
    List_viewRecord(start, studentId);
}

/*********************************************************************************************/

void View_All_Records(struct n *start)
{
    Motion();
    view_all_records(start);
}

/*********************************************************************************************/

void Edit_Student_Grade(struct n *start)
{
    int studentId, newGrade;
    printf("Enter student ID: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character
    printf("Enter new grade: ");
    scanf("%d", &newGrade);
    getchar(); // Consume newline character
    while (newGrade > 100)
    {
        printf("please enter grade less than or equal 100 \n");
        printf("Enter new grade: ");
        scanf("%d", &newGrade);
        getchar(); // Consume newline character
    }
    List_editStudent_grade(start, studentId, newGrade);
    Motion();
    printf("New Grade for student with id %d is update successfully.\n", studentId);
}
