#include "Student.h"

int Student_Login_Check (int Student_ID , char Student_Passowrd)
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
