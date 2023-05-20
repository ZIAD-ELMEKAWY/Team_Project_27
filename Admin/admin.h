#ifndef ADMIN_H
#define ADMIN_H

int Validate_Admin_Password(); // Function to validate admin password
// Takes nothing.
// Returns integer.

struct n *Add_Student_Record(struct n *start); // Function to add a student record
// Takes the start pointer of the linked list.
// Returns the updated start pointer.

struct n * Remove_Student_Record(struct n *start); // Function to remove a student record
// Takes the start pointer of the linked list.
// Returns the updated start pointer.

void View_Student_Record(struct n *start); // Function to view a specific student record
// Takes the start pointer of the linked list.
// Returns nothing.

void View_All_Records(struct n *start); // Function to view all student records
// Takes the start pointer of the linked list.
// Returns nothing.

void Edit_Admin_Password(); // Function to edit the admin password
// nothing.
// Returns nothing.

void Edit_Student_Grade(struct n *start); // Function to edit a student's grade
// Takes the start pointer of the linked list.
// Returns nothing.

#endif
