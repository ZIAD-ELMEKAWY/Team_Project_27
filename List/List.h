#ifndef LIST_H_
#define LIST_H_

struct n
{   char student_name[500];
    int total_grade;
    int student_ID;
    int student_age;
    char gender[50];
    char student_password[500];

struct n* link;

    }* start;


struct n* List_Add_student_record(struct n* start,char name[],int grade,int ID,int age,char gender[],char password[]);
struct n* List_DeleteRecord(struct n * start, int ID);
void List_viewRecord(struct n* start,int ID);
int List_GetUsedSize(struct n* start);
void view_all_records(struct n* start);
struct n* List_isIDExist(struct n* start,int id, char password []);
void List_editStudent_password(struct n* start,char OldPass[],char newPass[]);
void List_editStudent_name(struct n* start,int id,char newName[]);
void List_editStudent_grade(struct n* start,int id,int newGrade);
#endif
