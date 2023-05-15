#ifndef LIST_H_
#define LIST_H_

struct n
{   char* studunt_name;
    int total_grade;
    int student_ID;
    int student_age;
    char* gender;
    char* student_password;

struct n* link;

    }* start;


struct n* Add_student_record(struct n* start,char *name,int grade,int ID,int age,char gender[50],char *password);
struct n* List_DeleteRecord(struct n * start, int ID);
void List_viewRecord(struct n* start,int ID);
int List_GetUsedSize(struct n* start);
#endif
