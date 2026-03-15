# Terminal Student Database

A simple terminal-based Student Database Management System written in C.

This program allows users to manager student records through a CLI and stores the data in a file named "Student.txt".

---

## Features:
1. Add student records (ID,NAME,AGE,MARKS)
2. Display all student records
3. Search student by ID
4. Update student info
5. Delete student record
6. Menu-driven terminal interface
7. Modular multi-file C project structure.

---

## How to run

Prerequisites:
- GCC (or any standard C compiler)
- A terminal / command line
 
**1. Clone the repository**
```bash
git clone https://github.com/PramisKunwar/StudentDB
cd student-database
```
 
**2. Compile**
```bash
gcc main.c add.c display.c search.c update.c delete.c -o student_db
```
 
**3. Run**
```bash
./student_db
```
 
---

## Licence
Made for hack club.