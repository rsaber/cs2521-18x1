/*
 *  Sample Prac Question for cs2521-18x1 Week01
 *  No solutions will be posted, come by to Riyasat's tutes on Wed11 or Fri13
 *
 *	Given a string, find and print out the most frequent letter and its frequency as a percentage.
 *	Do not make any distinction between uppercase and lowercase letters, and ignore punctuation and spaces.
*/


#include <stdio.h>

// Some extra functions
int isLetter(char a){
	return 'a' <= a && a <= 'z' || 'A' <= a && a <= 'Z';
}

char lowerify(char a){
	return 'A' <= a && a <= 'Z' ? a - 'A' + 'a' : a;
}

// Edit this function only
void findFreqs(char * string){
    /* TODO: your implementation */
	
	//printf("Most frequently occuring letter is %c, occuring %lf of the time. \n", ..., ...);
}

int main(int argc, char **argv){
	if(argc != 2){
		printf("No Argument! To run $ %s \"[sentence]\"\n", argv[0]);
		return 1;
	}
	findFreqs(argv[1]);
	return 0;
}
