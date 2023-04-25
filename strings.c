//PA 10.1 - String Library
//DO NOT CHANGE THE MAIN FUNCTION
//DO NOT CHANGE THE FUNCITON PROTOTYPES
//Complete the function definitions down below
//Author
//Date

#include<stdio.h>
#define MAX_STRING 100
#define FILENAME "words.txt"

void loadTwoStrings(FILE*, char[], char[]);
int stringLength(char[]);
void stringCopy(char[], char[]);
void stringSwap(char[], char[]);
int stringCompare(char[], char[]);

int main(){
	char string1[MAX_STRING], string2[MAX_STRING];
	FILE* fptr = fopen(FILENAME, "r");
	
	if(fptr == NULL){
		printf("%s does not exist!\n", FILENAME);
		return 0;
	}

	loadTwoStrings(fptr, string1, string2);
 	fclose(fptr);

 	printf("STRINGS\n");
 	printf("%s\n", string1);
 	printf("%s\n", string2);

 	printf("\nSWAP\n");
 	stringSwap(string1, string2);
 	printf("%s\n", string1);
 	printf("%s\n", string2);
	
 	printf("\nCOMPARE\n");
 	if(stringCompare(string1, string2) == 0){
 		printf("%s & %s are the same!\n", string1, string2);
 	}
 	else{
 		printf("%s & %s are NOT the same!\n", string1, string2);	
 	}
	
	return 0;
}

void loadTwoStrings(FILE* fin, char str1[], char str2[]){

}

int stringLength(char str[]){
	return 0;
}

void stringCopy(char source[], char dest[]){
	
}

void stringSwap(char str1[], char str2[]){
	
}

int stringCompare(char str1[], char compared[]){
	return 0;
}