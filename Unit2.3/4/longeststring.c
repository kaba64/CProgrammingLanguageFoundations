#include <stdio.h>
int main(void){
  int number_words;
  scanf("%d",&number_words);
  char word[101];
  int longest_word=0;
  int i,j=0;
  for(i=0;i<number_words;i++){
    scanf("%s",word);
    while(word[j]!='\0'){
      j++;
    }
    if(j>longest_word){
      longest_word = j;
    }
    j=0;
  }
  printf("%d\n",longest_word);
  return 0;
}
