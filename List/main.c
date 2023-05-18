#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"List.h"
struct n* add(struct n* );
int main(){
int id;
int choose;

    struct n* start = NULL;
do{ printf("****************** Enter 1 to add a student  *******************\n");
    printf("****************** Enter 2 to get list of studentIDs************\n");
    printf("****************** Enter 3 to read an entry  *******************\n");
    printf("****************** Enter 4 to check log in        ***************\n");
    printf("****************** Enter 5 to delete entry *********************\n");
    printf("****************** Enter 6 to change password*********************\n");
    printf("****************** Enter 7 to change name *********************\n");


scanf("%d",&choose);

switch(choose)
{
    case 1:
    {
    int n=List_GetUsedSize(start);
        if (n<10)
        {
    start= add(start);
    List_GetUsedSize(start);
        }
    else
   {
       printf("the list is full\n");
   }
    break;
    }


case 2:
        {view_all_records( start);
   List_GetUsedSize(start);
     break;
        }
case 3:{ view(start,id);
         break;}
     case 4:{   log_in(start);
          break;   }


     case 5:
        {  int id;
        printf("enter id to delete");
        scanf("%d",&id);
        start=List_DeleteRecord(start,id);
    List_GetUsedSize(start);
    break;
            }
     case 6:
        {
    editPass(start);
        }
     case 7:
        {
            editname(start);
        }
}

}

while(choose!=0);
    return 0;}

    struct n* add(struct n* start)
    {   char name[500];int grade;int id;int age;char gender[50];char password[500];
        printf("enter name\n");
        _flushall();
        gets(name);
        printf("enter grade\n");
        scanf("%d",&grade);
        printf("enter id\n");
        scanf("%d",&id);
        while(List_isIdExist(start,id)==1)
        {
            printf("this ID exist ,please enter another\n");
            scanf("%d",&id);
        }

        printf("enter age\n");
        scanf("%d",&age);
        printf("enter gender\n");
        scanf("%s",&gender);
        printf("enter password\n");
        scanf("%s",&password);
      start= List_Add_student_record(start,name,grade,id,age,gender,password);
    return start;
    }

    void log_in(struct n* start)
    {
        int id;
        char password[100];
        printf("enter id and password\n");
        scanf("%d",&id);
        _flushall();
        scanf("%s",password);
        if (List_check_logIn(start,id,password)==1)
            printf("OK!\n");
        else
            printf("not exsist\n");
    }

    void view(struct n* start,int id)
    {printf("enter id you want to check");
        scanf("%d",&id);
        List_viewRecord(start,id);

    }
    void editPass(struct n* start)
    {
        char old[100],newPass[100];
        printf("enter old pass ");
        _flushall();
        gets(old);
        printf("enter new ");
        _flushall();
        gets(newPass);
        List_editStudent_password(start,old,newPass);
    }

    void editname(struct n* start)
    {
        int id ;
       char newname[100];
        printf("enter id ");
scanf("%d",&id);
        printf("enter new ");
        _flushall();
        gets(newname);
        List_editStudent_name(start,id,newname);
    }


