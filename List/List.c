#include <stdio.h>
#include <stdlib.h>
#include"List.h"


struct n* List_Add_student_record(struct n* start,char name[],int grade,int ID,int age,char gender[],char password[])
{
	struct n* temp = (struct n*)malloc(sizeof(struct n));

    strcpy(temp->student_name,name);
    temp->total_grade=grade;
    temp->student_ID=ID;
    temp->student_age=age;
    strcpy(temp->gender,gender);
    strcpy(temp->student_password,password);

	temp->link=start;
	start = temp;
	return start;
}
/*********************************************************************************************/
struct n* List_DeleteRecord(struct n * start, int ID)
{
	struct n* temp;
	if(start->student_ID == ID)
	{
		temp = start;
		start = start->link;
		free(temp);
		return start;
	}

	struct n* ptr = start;

	while(ptr->link!=NULL)
	{
		if(ptr->link->student_ID == ID)
		{
			break;
		}
		ptr = ptr->link;
	}

	if(ptr->link==NULL)
	{
		printf("Element of the value [%d] is not in the List\n",ID);
	}
	else
	{
		temp=ptr->link;
		ptr->link=temp->link;
		free(temp);
	}
	return start;
}
/*********************************************************************************************/
void List_viewRecord(struct n* start,int ID)
{
int count=0;
	struct n* ptr = start;

while(ptr!=NULL){
	if(ptr->student_ID==ID)
	{



		printf("Student name is :");
		puts(ptr->student_name);
		printf("Student grade is :%d\n",ptr->total_grade);
		printf("Student age is %d\n",ptr->student_age);
		printf("Student gender is:");
		puts(ptr->gender);


	}
else
    ++count;

		ptr = ptr->link;}
		int r=List_GetUsedSize(start);
if(count==r){
    printf("enter correct studentID\n");
}


		}

/*********************************************************************************************/
int List_GetUsedSize(struct n* start)
{
	struct n* temp = start;
    int count=0;
	while(temp!= NULL )
	{
	    temp=temp->link;
			count++;
	}
	printf("The number of students is = %d\n",count);
	return count;
}
/*********************************************************************************************/
void view_all_records(struct n* start)
{
    struct n* ptr =start;
    printf("list is \n");

    while(ptr!=NULL)
    {
    printf("student name is:");
    puts(ptr->student_name);

    printf("total grade is:%d\n",ptr->total_grade);
    printf("student id is:%d\n",ptr->student_ID);
    printf("student age is:%d\n",ptr->student_age);
    printf("gender is:");
    puts(ptr->gender);
    printf("\n");
    ptr=ptr->link;
    }
}
/*********************************************************************************************/
struct n* List_isIDExist(struct n* start,int id, char password [])
{

int count=0;
struct n* ptr = start;
while(ptr!=NULL){
	if(ptr->student_ID==id && strcmp(ptr->student_password,password)==0)
	{return 1;}


else
    ++count;

		ptr = ptr->link;}
		int r=List_GetUsedSize(start);
if(count==r){
    return 0;
}
}
/*********************************************************************************************/

void List_editStudent_password(struct n* start,char OldPass[],char newPass[])
{
    int count=0;
	struct n* ptr = start;

while(ptr!=NULL){
	if(strcmp(ptr->student_password,OldPass)==0)
	{
strcpy(ptr->student_password,newPass);

	}
else
    ++count;

		ptr = ptr->link;}
		int r=List_GetUsedSize(start);
if(count==r){
    printf("enter correct password\n");
}


		}
/*********************************************************************************************/

void List_editStudent_name(struct n* start,int id,char newName[])
{
    int count=0;
	struct n* ptr = start;

while(ptr!=NULL){
	if(ptr->student_ID==id)
	{
strcpy(ptr->student_name,newName);

	}
else
    ++count;

		ptr = ptr->link;}
		int r=List_GetUsedSize(start);
if(count==r){
    printf("enter correct ID\n");
}


		}


