

/*
 *  Sample Prac Question for cs2521-18x1 Week01
 *  No solutions will be posted, come by to Riyasat's tutes on Wed11 or Fri13
 *
 *  Write a function that slowly strips away the whitespace around given string. Each time you strip away 
 *  whitespace, print out the string. Strip the whitespace starting from the left side, then the right side,
 *  and if there is no more whitespace to strip on a particular side, ignore it.
 *
 *  Example:
 *  Input: ".....cs2511....."
 *  Output:
 *    ....cs2511.....
 *    ....cs2511....
 *    ...cs2511....
 *    ...cs2511...
 *    ..cs2511...
 *    ..cs2511..
 *    .cs2511..
 *    .cs2511.
 *    cs2511.
 *    cs2511

 *   The following example uses ' '.'s instead of ' ''s, to illustrate the function's intended operation.
*/

#include <stdio.h>

void undress(char * string){
    /* TODO your implementation here */
}

void strip(char *s){
    for(; *s!='\n'; s++);
    *s=0;
}

int main(){
    char string[1000];
    printf("Enter your string here: ");
    fgets(string, 1000, stdin);
    strip(string);
    undress(string);
    printf("%s\n", string);
    return 0;
}
