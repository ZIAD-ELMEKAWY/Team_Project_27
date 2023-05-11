/*** Public Interfaces ***/

#ifndef _STUDENT_H_
#define _STUDENT_H_

int  Student_Login_Check   (int Student_ID , char Student_Passowrd);
void Student_View_Record   (int Student_ID);
char Student_Edit_Name     (char* Student_Edit_Name);
char Student_Edit_Paasword (char Student_Edit_Paasword);

#endif
