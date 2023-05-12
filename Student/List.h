
#ifndef LIST_H_
#define LIST_H_
#include <stdio.h>
#include <stdlib.h>
typedef short int unit8;

 struct n
{int info[6];

struct n* link;

    }* start;

struct n* Add_student_record(struct n* start);
struct n* InsertInBeginning(struct n* start, unit8 data[6]);
void View_student_record(struct n* start);
struct n* Remove_student_record(struct n * start, int data[6]);
void  View_all_records(struct n* start);
void isIDExist(struct n* start);
struct n* Edit student grade(struct n * start, int data[6]);
#endif