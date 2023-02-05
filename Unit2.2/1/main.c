#include <stdio.h>
int main(void){
    int ingredient_number[10];
    int individual_number;
    int individual_index=0;
    int i;
    for (i=0; i<10; i++){
       scanf("%d", &individual_number);
       ingredient_number[individual_index] = individual_number;
       individual_index = individual_index + 1;
    }
     scanf("%d", &individual_index);
     printf("%d\n",ingredient_number[individual_index]);
    return 0;
}
