/*** Public Interfaces ***/

#ifndef _STUDENT_H_
#define _STUDENT_H_
void Student_Mode();             // Include the definition of functions
int  Student_Login_Check   (int Student_ID , char Student_Passowrd);  // To check Student Login
void Student_View_Record   (int Student_ID);               // To view Student Record
char Student_Edit_Name     (char* Student_Edit_Name[]);    // Edit student Name
char Student_Edit_Paasword (char Student_Edit_Paasword);   // Edit student passowrd
void Motion (void);              // For motion not more ^_^

#endif
