# Disk Killer

## Introduction

Disk Killer is a simple C++ program. This program creates a specified number of 1GB files, rapidly consuming disk space.

## How to Use

1. Clone or download this project to your local machine.
2. Compile and run the program.
3. Enter the number of files to create when prompted.
4. Observe as your disk space is quickly consumed.

## Precautions

- **Use with Caution**: This program will consume a significant amount of disk space. Make sure you understand the consequences before using it.
- **File Permissions**: Ensure you have the necessary permissions to create files in the directory where the program is run.
- **File Name Conflicts**: If there are already files in the current directory that start with `killer_`, file name conflicts may occur.

## Compilation

Make sure you have a C++ compiler installed on your system. In the project root directory, use the following command to compile the program:

```bash
g++ -o DiskKiller DiskKiller.cpp
