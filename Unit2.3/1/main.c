//Write a C-program that prints out a word as many times as specified. The number of repetitions and the word
//should be given as input to the program. You may assume that the word has no more than 100
// characters (be sure to also reserve space for the null terminator, \0, though!).
#include <stdio.h>
int main(void){
    char word[100];
    int number_iteration = 0;
    scanf("%d %s", &number_iteration, word);
    int i=0;
    for ( i = 0; i < number_iteration; i++){
        printf("%s\n", word);
    }
    return 0;
}
