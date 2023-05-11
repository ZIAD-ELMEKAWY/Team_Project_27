#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "student.h"

int main()
{
    int modeChoice;

    printf("Student Record System\n");
    printf("1. Admin Mode\n");
    printf("2. Student Mode\n");
    printf("Choose a mode (1-2): ");
    fflush(stdin);
    scanf("%d", &modeChoice);
    fflush(stdin);

    switch (modeChoice)
    {
    case 1:
        adminMode();
        break;
    case 2:
        studentMode();
        break;
    default:
        printf("Invalid mode choice. Exiting...\n");
        break;
    }

    return 0;
}
