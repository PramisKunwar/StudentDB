# Terminal Student Database v2.0

A robust, terminal-based Student Database Management System written in C with improved security, input validation, and automatic ID management.

---

##  What's New in v2.0

- **Auto-incrementing IDs** — IDs are assigned automatically (1, 2, 3...), eliminating manual entry and ensuring uniqueness
- **Enhanced Input Validation** — Validates names (letters and spaces only), age (1–120), and marks (0–100)
- **Buffer Overflow Protection** — Replaced unsafe `scanf()` with secure `fgets()` for all inputs
- **Names with Spaces** — Supports full names like "John Doe"
- **Better Error Handling** — Comprehensive file operation checks with user-friendly messages
- **Improved Formatting** — Clean, aligned table display with total record count
- **Robust File Operations** — Proper temporary file management with cleanup on failures

---

## Features

1. **Add Student Records** — Auto-assigns a unique ID, validates all inputs
2. **Display All Records** — Formatted table with total record count
3. **Search by ID** — Quick lookup of individual student records
4. **Update Records** — Modify existing student info with validation
5. **Delete Records** — Remove students from the database
6. **Menu-Driven Interface** — Simple, intuitive command-line navigation

---

## Getting Started

### Prerequisites

- GCC (or any standard C compiler)
- Terminal / Command Line

### Installation

```bash
# Clone the repository
git clone https://github.com/PramisKunwar/StudentDB
cd StudentDB

# Compile
gcc main.c add.c display.c search.c update.c delete.c -o student_db

# Run
./student_db
```

---

## Project Structure

```
StudentDB/
├── student.h      
├── main.c        
├── add.c          
├── display.c      
├── search.c       
├── update.c      
├── delete.c       
└── student.txt    # Data file (auto-created)
```

---

## Input Validation

| Field     | Rules                                        |
|-----------|----------------------------------------------|
| **ID**    | Auto-generated, unique, starts from 1        |
| **Name**  | Letters and spaces only, max 49 characters   |
| **Age**   | 1 to 120                                     |
| **Marks** | 0 to 100 (decimals supported)                |

---

## Version History

| Version | Notes |
|---------|-------|
| v2.0 | Auto-incrementing IDs, `fgets()` input handling, comprehensive validation, improved formatting |
| v1.0 | Basic CRUD operations, manual ID entry, `scanf()` inputs |

---

## License

Made for hack club (terminal-craft ysws)

---

## Author

```
  _____                     _       _  __                                    
 |  __ \                   (_)     | |/ /                                    
 | |__) | __ __ _ _ __ ___  _ ___  | ' /_   _ _ ____      ____ _ _ __        
 |  ___/ '__/ _` | '_ ` _ \| / __| |  <| | | | '_ \ \ /\ / / _` | '__|       
 | |   | | | (_| | | | | | | \__ \ | . \ |_| | | | \ V  V / (_| | |          
 |_|___|_|  \__,_|_| |_| |_|_|___/ |_|\_\__,_|_| |_|\_/\_/ \__,_|_|      _   
  / ____|             | |      /_ |__ \      | |           | |          | |  
 | |  __ _ __ __ _  __| | ___   | |  ) |  ___| |_ _   _  __| | ___ _ __ | |_ 
 | | |_ | '__/ _` |/ _` |/ _ \  | | / /  / __| __| | | |/ _` |/ _ \ '_ \| __|
 | |__| | | | (_| | (_| |  __/  | |/ /_  \__ \ |_| |_| | (_| |  __/ | | | |_ 
  \_____|_|  \__,_|\__,_|\___|  |_|____| |___/\__|\__,_|\__,_|\___|_| |_|\__|
                                                                             
```                                                                 