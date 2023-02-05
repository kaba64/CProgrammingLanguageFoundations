//#include <stdio.h>
//int main(void){
//    char examin[5];
//    scanf("%s", examin);
//    examin[2] = '\0';
//    printf("%s", examin);
//    return 0;
//}
#include <stdio.h>
int main(void){
    int number=0;
    char first_name[101];
    char last_name[101];
    scanf("%d", &number);
    int i=0;
    for (i = 0; i < number; i++){
        scanf("%s %s", first_name, last_name);
        printf("%s %s\n", last_name, first_name);
    }
    return 0;
}
