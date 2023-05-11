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
static const char DEFAULT_PASSWORD[] = "1234";

char adminPassword[MAX_PASSWORD_LENGTH];

void adminMode()
{
    if (validateAdminPassword())
    {
        int adminChoice;

        printf("\nAdmin Mode\n");
        printf("Choose an option (1-6): \n");
        printf("1. Add student record\n");
        printf("2. Remove student record\n");
        printf("3. View student record\n");
        printf("4. View all records\n");
        printf("5. Edit admin password\n");
        printf("6. Edit student grade\n");
        fflush(stdin);
        scanf("%d", &adminChoice);
        fflush(stdin);

        switch (adminChoice)
        {
        case 1:
            addStudentRecord();
            break;
        case 2:
            removeStudentRecord();
            break;
        case 3:
            viewStudentRecord();
            break;
        case 4:
            viewAllRecords();
            break;
        case 5:
            editAdminPassword();
            break;
        case 6:
            editStudentGrade();
            break;
        default:
            printf("Invalid option. Exiting admin mode...\n");
            break;
        }
    }
    else
    {
        printf("Invalid password. Exiting admin mode...\n");
    }
}

int validateAdminPassword()
{
    char adminPassword[MAX_PASSWORD_LENGTH];
    int attempts = 0;

    while (attempts < MAX_PASSWORD_ATTEMPTS)
    {
        printf("Enter admin password: ");
        fgets(adminPassword, sizeof(adminPassword), stdin);
        adminPassword[strcspn(adminPassword, "\n")] = '\0'; // Remove trailing newline

        if (strcmp(adminPassword, DEFAULT_PASSWORD) == 0)
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

void Add_Student_Record()
{
}
void Remove_Student_Record()
{
}
void View_Student_Record()
{
}
void View_All_Records()
{
}
void Edit_Admin_Password()
{
}
void Edit_Student_Grade()
{
}
