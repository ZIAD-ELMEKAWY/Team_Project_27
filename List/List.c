#include <stdio.h>
#include <stdlib.h>
#include"List.h"


struct n* List_Add_student_record(struct n* start,char *name,int grade,int ID,int age,char* gender,char *password)
{
	struct n* temp = (struct n*)malloc(sizeof(struct n));

    temp->studunt_name=name;
    temp->total_grade=grade;
    temp->student_ID=ID;
    temp->student_age=age;
    temp->gender=gender;
    temp->student_password=password;

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



		printf("Student name is : %d\n",ptr->studunt_name);
		printf("Student grade is :%d\n",ptr->total_grade);
		printf("Student age is %d\n",ptr->student_age);
		printf("Student gender is %d\n",ptr->gender);


	}
else
    ++count;

		ptr = ptr->link;}
		int r=SDB_GetUsedSize(start);
if(count==r){
    printf("enter correct studentID\n");
}


		}

/*********************************************************************************************/
int SDB_GetUsedSize(struct n* start)
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
