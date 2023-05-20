Student Record System

This is a mini-project called "Student Record System" implemented using the C programming language.
The system allows users to manage student records and perform various operations based on their privileges.
It supports two modes: Admin mode and User mode.

System Modes
Admin mode: In this mode, the user is required to enter the password to access administrative privileges.

Admin Privileges:

Add student record
Remove student record
View student record
View all records
Edit admin password
Edit student grade

User mode: In this mode, the user needs to provide their ID and password to access user-specific privileges.

User Privileges:

View your record
Edit your password
Edit your name
Admin Mode
Upon selecting admin mode, the system prompts the user for the password. 
The default password is "1234", and the user has three attempts to enter the correct password.

Add student record:

The admin can add a new student by entering their basic information, including name, total grade, unique ID, age, gender, and password.
The ID must be unique, and if the entered ID already exists, the system will reject the entry.
Remove student record:

The admin can remove a student record by entering the student's ID.
If the entered ID doesn't exist, the system will reject the transaction.
View student records:

By entering a student's ID, the system displays the basic information for that student.
View all records:

This function displays all the entered student records.
Edit admin password:

The admin can change their password by selecting this option.
Edit student grade:

This option allows the admin to edit the total grade of a student by providing their ID.
The new grade must be between 0 and 100.
User Mode
Upon selecting user mode, the system prompts the user for their ID and password.

View your record:

By entering their ID, the system displays the basic information for that user's record.
Edit your password:

By entering their ID, the user can edit their password.
Edit your name:

By entering their ID, the user can edit their name.
