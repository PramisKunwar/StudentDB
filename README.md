# Terminal Student Database v2.0  

A simple student database program for the terminal, written in C. It lets you add, view, search, update, and delete student records. IDs are handled automatically, inputs are validated, and the display is neat and easy to read.  

---

| ![StudentDB](/StudentDB-2.0.png) | ![StudentDB](/StudentDB-2.0-1.png) |
|----------------------------------|------------------------------------|
| ![StudentDB](/StudentDB-2.0-2.png) | ![StudentDB](/StudentDB-2.0-3.png) |

---

## What’s New in v2.0
- Automatic IDs (no manual entry needed)  
- Input checks for names, age, and marks  
- Safer input handling with `fgets()`  
- Supports full names with spaces  
- Clear error messages for file issues  
- Cleaner table formatting with record count  
- Better file management and cleanup  

---

## Features
- Add student records (auto ID + validation)  
- Show all records in a table  
- Search by ID  
- Update student info  
- Delete records  
- Simple menu interface  

---

## Setup

### Requirements
- GCC or any C compiler  
- Terminal / Command Line  

### Installation
```bash
git clone https://github.com/PramisKunwar/StudentDB
cd StudentDB
gcc main.c add.c display.c search.c update.c delete.c -o student_db
./student_db
```

---

## Project Files
```
StudentDB/
├── student.h
├── main.c
├── add.c
├── display.c
├── search.c
├── update.c
├── delete.c
└── student.txt   # Data file (auto-created)
```

---

## Input Rules
| Field | Rule |
|-------|------|
| ID    | Auto-generated, unique |
| Name  | Letters + spaces, max 49 chars |
| Age   | 1–120 |
| Marks | 0–100 (decimals allowed) |

---

## Version History
| Version | Notes |
|---------|-------|
| v2.0    | Auto IDs, safer input, validation, better formatting |
| v1.0    | Basic CRUD, manual IDs, used `scanf()` |

---

## License
Made for Hack Club

---

## Author
Pramis Kunwar  
