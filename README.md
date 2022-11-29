# ProgrammingAssignment10 DESIGN

## Project Goals
The goal of this project is to:
1. Be the culmination of concepts learned throughout the entire semester
2. Allow students to develop teamwork skills
## Program  
Bombs away! We'll be building a minesweeper game for our final project. 

We will be breaking down the functionality of our game into multiple phases. The first checkpoint only requires basic game play functionality. Correct implementation of these features will earn a project grade of B. The second checkpoint and extra credit opportunities will be announced next week.

You may clone this repository, but you cannot commit to it.

### Requirements
Create a design document detailing how you would break the problem down. Your document should include the data you will need to save and the algorithm for the game.  It should also list each function you plan to create: the input, output, and a description of how it will perform its task. An example Design Document is included in this repository.  

### Required Functionality
Your minesweeper game is required to allow the user to choose different cells to interact with. Users can mark that cell with a flag, if they think a bomb is in that cell. They can uncover that single cell to see what is there, or they can check all the cells surrounding their chosen cell. If the user uncovers a bomb, they lose. If one of the cells uncovered when they check surrounding cells is either an unmarked bomb or incorrectly marked as a bomb, they lose.

When a user uncovers a cell, it either has a bomb in it, is blank, or has a number in it. Numbers tell the users how many bombs are in the surrounding cells. For example, if the number is ```2```, there are only two bombs in the surrounding cells. If the cell is blank, there are no bombs touching that cell. In traditional minesweeper play, if you uncover a blank cell when checking, a chain reaction will occur. For the first checkpoint, do not implement this feature (although you may want to consider how you could implement it later).

Your minesweeper game will get the field layout from a file (an example file is included in this repository).

You can see how a traditional minesweeper game by performing an internet search, but please not the differences between it and what's required as demonstrated by the executable:
![image](https://user-images.githubusercontent.com/2504089/204570463-0a12c999-4c0d-4030-acec-85ea37a43d65.png)

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a "permission denied" error when attempting to run the executable, type ```chmod u+x minesweeperExecutable``` into the terminal and try running the executable again.

## Submission details
To submit your project, upload a document to the assignment in WebCampus.  

## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
