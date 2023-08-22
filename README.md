# Final Group Project

## Project Goals
The goal of this project is to:
1. Serve as a culmination of skills learned throughout the semester.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be verifying your code compiles.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```connect4.c```
## Program
Time to connect all the concepts together!

Write a program that will allow the user to play a simplified version of Connect 4. You can find an overview of the official rules here: https://www.gamesver.com/the-rules-of-connect-4-according-to-m-bradley-hasbro/.

### Game Play
- A menu should be displayed which provides the user some options. The user may play a game, load an existing game (from a file), or exit the program.
- If the user chooses to play the game, they should first be prompted to enter their name and their opponent’s name. Those names will be used during game play. The players are then informed which pieces represent them.
- Each player should take turns making their moves until the game is won or ends in a tie. Then the user should be taken back to the menu. 

## Requirements
-  A minimum of 5 functions must be included (I recommended more!)
-  A game can be loaded from a ```saved_game.txt``` file
-  You may only use the stdio.h and stdbool.h libraries

### Extra Credit
#### Features will **ONLY** be considered for extra credit if the required functionality is completely implemented.  
(10%) Allow the user to quit and save in the middle of a game. That will be the game loaded the next time the user chooses that option.

## Example Program Execution
### An example executable is provided in this repository.
- You should be able to run it from your project folder in a Linux environment. 
- If you encounter a “permission denied” error when attempting to run the executable, type  
```chmod u+x connect4Executable```  
into the terminal and try running the executable again.
- There is alreday a file in the repository for a saved game.

## Submission details
To submit your project, you should use git in your Linux environment:
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
