//Your program must first read an integer indicating the number that the child will have to find during the game. Next
//the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted
//a smaller number or "it is less" if they have submitted a larger number. Once the correct number is reached, the
//program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took
//the guesser.
//#include <stdio.h>
//int main(void){
//    int final_number=0;
//    scanf("%d\n", &final_number);
//    int number_read=0;
//    scanf("%d\n", &number_read);
//    int number_tries=1;
//    while(number_read != final_number){
//        if(number_read > final_number){
//            printf("it is less\n");
//        } else if(number_read < final_number){
//            printf("it is more\n");
//        }
//        scanf("%d\n", &number_read);
//        number_tries = number_tries + 1;
//    }
//    printf("Number of tries needed:\n");
//    printf("%d\n", number_tries);
//    return 0;
//}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! the second code !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>
int main(void){
    int minimum_saf_temperature=0;
    scanf("%d", &minimum_saf_temperature);
    int maximum_saf_temperature=0;
    scanf("%d", &maximum_saf_temperature);
    int temperature=0;
    scanf("%d", &temperature);
    while ((temperature >= minimum_saf_temperature && temperature <= maximum_saf_temperature) && (temperature != -999)){
        printf("Nothing to report\n");
        scanf("%d", &temperature);
    }
    if (temperature == -999){

    } else{
     printf("Alert!\n");
    }
    return 0;
}
