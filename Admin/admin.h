#ifndef ADMIN_H
#define ADMIN_H

int Validate_Admin_Password(); // Function to validate admin password
struct n* Add_Student_Record(struct n* start);     // Function to add a student record
void Remove_Student_Record(struct n* start);  // Function to remove a student record
void View_Student_Record(struct n* start);    // Function to view a specific student record
void View_All_Records(struct n* start);       // Function to view all student records
void Edit_Admin_Password(struct n* start);    // Function to edit the admin password
void Edit_Student_Grade(struct n* start);     // Function to edit a student's grade

#endif
