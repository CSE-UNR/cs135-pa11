# ProgrammingAssignment10 Checkpoint 1

## Project Goals
The goal of this project is to:
1. Familiarize students with the use of **strings**
2. Write functions necessary for the **Final Project**
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Use of the string library is not allowed in this class, so let's build our own! Common string functions include finding the length of a string, copying one string over to another, swapping strings, and comparing strings to each other. Your program should implement each of these and a function to load two strings from the ```words.txt``` file.  

## Requirements
In addition to the main function, there should be 5 additional functions. Some functions may call other functions to make accomplishing tasks easier.  
**DO NOT** change the .c file name, the main function, or the function prototypes. Your task is simply to *provide the code inside of the existing function definitions*.  

### The driver:
An driver with function prototypes and calls is alreday provided in this repository. Complete the function definitions in this file.

***loadTwoStrings*** should save each line from the file into a separate string

*****stringLength***** should return the length of a given string

***stringCopy*** should copy the source string into the destinationn string so that they're both the same

***stringSwap*** should overwrite each string with the other string so that they "swap places"

***stringCompare*** should indicate whether the strings are the same according to the rules below.
>0	  - They compare equal.  
><0	 - Either the value of the first character that does not match is lower in the compared string, or all compared characters match but the compared string is shorter.  
>\>0	- Either the value of the first character that does not match is greater in the compared string, or all compared characters match but the compared string is longer.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
