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
#include "list.h"
#include "admin.h"

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
    printf("Admin password updated successfully.\n");
}

void Add_Student_Record()
{
    Student student;

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter total grade: ");
    scanf("%d", &student.totalGrade);
    getchar(); // Consume newline character

    printf("Enter unique ID: ");
    scanf("%d", &student.uniqueId);
    getchar(); // Consume newline character

    printf("Enter age: ");
    scanf("%d", &student.age);
    getchar(); // Consume newline character

    printf("Enter gender (M/F): ");
    scanf("%c", &student.gender);
    getchar(); // Consume newline character

    printf("Enter password: ");
    fgets(student.password, sizeof(student.password), stdin);
    student.password[strcspn(student.password, "\n")] = '\0'; // Remove trailing newline

    // insertNode(student);

    printf("Student record added successfully.\n");
}
void Remove_Student_Record()
{
    int studentId;
    printf("Enter student ID to remove: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character

    // deleteNode(studentId);
}
void View_Student_Record()
{
    int studentId;
    printf("Enter student ID to view: ");
    scanf("%d", &studentId);
    getchar(); // Consume newline character

    Node *studentRecord = // findNode(studentId);
        if (studentRecord != NULL)
    {
        // displayNode(studentRecord);
    }
    else
    {
        printf("Student with ID %d not found.\n", studentId);
    }
}
void View_All_Records()
{
    // displayAllNodes();
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

    // editStudentGradeById(studentId, newGrade);
}
