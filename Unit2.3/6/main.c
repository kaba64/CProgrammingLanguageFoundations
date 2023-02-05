#include <stdio.h>
int main(void){
    int n= 51;
    char word[n];
    char swap;
    int i = 0, j = 0, upper_bound, count = 0;
    scanf("%s", word);
    while (word[i] != '\0'){
        i++;
    }
    upper_bound = i;
    for (j = 0; j < upper_bound - 1; j++){
        for (i = 0; i < upper_bound - 1; i++ ){
            if (word[i] > word[i+1]){
                swap = word[i+1];
                word[i+1] = word[i];
                word[i] = swap;
            }
        }
    }
    for (i=0; i<upper_bound; i++){
        if (word[i] == word[i+1]){
            if(i==0 || word[i] != word[i-1]){
                count = count + 1;
            }
        }
    }
    printf("%d ", count);
    return 0;
}
