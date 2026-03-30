# Terminal Student Database v2.0
A simple student database program for the terminal, written in C. It lets you add, view, search, update, and delete student records. IDs are handled automatically, inputs are validated, and the display is neat and easy to read.

---

| ![StudentDB](/StudentDB-2.0.png) | ![StudentDB](/StudentDB-2.0-1.png) |
|----------------------------------|------------------------------------|
| ![StudentDB](/StudentDB-2.0-2.png) | ![StudentDB](/StudentDB-2.0-3.png) |

---

What’s new in v2.0:
Automatic IDs (no manual entry needed)
Input checks for names, age, and marks
Safer input handling with fgets()
Supports full names with spaces
Clear error messages for file issues
Cleaner table formatting with record count
Better file management and cleanup

---

Features:
Add student records (auto ID + validation)
Show all records in a table
Search by ID
Update student info
Delete records
Simple menu interface

---

Setup
git clone https://github.com/PramisKunwar/StudentDB
cd StudentDB
gcc main.c add.c display.c search.c update.c delete.c -o student_db
./student_db

---

Input rules
ID: auto generated unique
Name: letters and spaces max 49 characters
Age: 1 to 120
Marks: 0 to 100 (decimals allowed)

---

License
Made for Hack Club

---

Author
Pramis Kunwar