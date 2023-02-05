//You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the
//first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does
//contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but
//the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all,
//your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
#include <stdio.h>
int main(void){
    char word[51];
    int array_lenght, middle_point;
    scanf("%s", word);
    int i = 0, found = 0;
    int out_put;
    while (word[i] != '\0'){
        i++;
    }
    if(i%2 ==0){
        middle_point = i/2;
    }else{
        middle_point = (i + 1)/2;
    }
    array_lenght = i;
    i = 0;
    while (!found && i <= array_lenght){
        if((word[i] == 't') | (word[i] == 'T')){
            found = 1;
            if (i <= middle_point){
                out_put = 1;
            }else{
                out_put = 2;
            }
        } else{
            i++;
        }
    }
    if (!found){
        out_put = -1;
    }
     printf("%d", out_put);
    return 0;
}
