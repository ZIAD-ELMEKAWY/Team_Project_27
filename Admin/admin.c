/**
 * @file     Admin.c
 * @version  20.00
 * @brief    Admin Module
 * @details  This file contains the Admin module Source code
 * @Author   Abdelrhman_Ellawendi
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "./List/List.h"
#include "admin.h"
#include "./Student/Student.h"

#define MAX_PASSWORD_LENGTH 30
#define MAX_PASSWORD_ATTEMPTS 3

static char AdminPassword[MAX_PASSWORD_LENGTH] = "1234";

int Validate_Admin_Password()
{
    char adminPassword[MAX_PASSWORD_LENGTH];
    int attempts = 0;

    while (attempts < MAX_PASSWORD_ATTEMPTS)
    {
        printf("Enter admin password: ");
        fgets(adminPassword, sizeof(adminPassword), stdin);
        adminPassword[strcspn(adminPassword, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(adminPassword, AdminPassword) == 0)
        {
            return 1; // Password is correct
        }
        else
        {
            printf("Invalid password. %d attempts remaining.\n", MAX_PASSWORD_ATTEMPTS - attempts - 1);
            attempts++;
        }
    }

    return 0; // Password is incorrect or maximum attempts reached
}

void Edit_Admin_Password()
{
    char newPassword[MAX_PASSWORD_LENGTH];
    printf("Enter new admin password: ");
    fgets(newPassword, sizeof(newPassword), stdin);
    newPassword[strcspn(newPassword, "\n")] = '\0'; // Remove trailing newline
    strncpy(AdminPassword, newPassword, MAX_PASSWORD_LENGTH);
    Motion();
    printf("Admin password updated successfully.\n");
}

void Add_Student_Record()
{
    char *studunt_name;
    int total_grade;
    int student_ID;
    int student_age;
    char *gender;
    char *student_password;

    printf("Enter student name: ");
    fgets(studunt_name, sizeof(studunt_name), stdin);
    studunt_name[strcspn(studunt_name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter total grade: ");
    scanf("%d", &total_grade);
    getchar(); // Consume newline character
    while(total_grade>100){
    printf("please enter grade less than or equal 100 \n");
        printf("Enter new grade: ");
        scanf("%d", &total_grade);
        getchar(); // Consume newline character
    }
    printf("Enter unique ID: ");
    scanf("%d", &student_ID);
    getchar(); // Consume newline character

    printf("Enter age: ");
    scanf("%d", &student_age);
    getchar(); // Consume newline character

    printf("Enter gender (Male/Female): ");
    fgets(gender, sizeof(gender), stdin);
    gender[strcspn(gender, "\n")] = '\0';

    printf("Enter password: ");
    fgets(student_password, sizeof(student_password), stdin);
    student_password[strcspn(student_password, "\n")] = '\0'; // Remove trailing newline

    start=List_Add_student_record(start,studunt_name, total_grade, student_ID, student_age, gender, student_password);
    Motion();
    printf("Student record added successfully.\n");
}
void Remove_Student_Record()
{
    int studentId;
    printf("Enter student ID to remove: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character

    start=List_DeleteRecord(start,studentId);
    Motion();
    printf("Student record with id %d deleted successfully.\n",studentId);
}
void View_Student_Record()
{
    int studentId;
    printf("Enter student ID to view: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character
    Motion();
    List_viewRecord(start,studentId);
}
void View_All_Records()
{
    Motion();
    view_all_records(start);
}
void Edit_Student_Grade()
{
    int studentId, newGrade;
    printf("Enter student ID: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character

    printf("Enter new grade: ");
    scanf("%d", &newGrade);
    getchar(); // Consume newline character
    while(newGrade>100){
    printf("please enter grade less than or equal 100 \n");
        printf("Enter new grade: ");
        scanf("%d", &newGrade);
        getchar(); // Consume newline character
    }
    List_editStudent_grade(start,studentId, newGrade);
    Motion();
    printf("New Grade for student with id %d is update successfully.\n",studentId);
}
