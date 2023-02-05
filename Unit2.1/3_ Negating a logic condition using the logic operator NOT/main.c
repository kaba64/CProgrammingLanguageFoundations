#include <stdio.h>
int main(void) {
     int hight_leaflets, number_leaflets;
     scanf("%d\n", &hight_leaflets);
     scanf("%d\n", &number_leaflets);
     if(hight_leaflets<=8){
      if(hight_leaflets<=5 && number_leaflets>=8){
       printf("Tinuviel\n");
      } else{
             if(number_leaflets<=5){
                printf("Falarion\n");
             } else{
                     printf("Uncertain\n");
                    }
            }
     } else {
             if(hight_leaflets>=10){
                                    if(hight_leaflets>=10 && number_leaflets>=10){
                                     printf("Calaelen\n");
                                    } else {
                                            if(hight_leaflets>=12 && number_leaflets<=7){
                                             printf("Dorthonion\n");
                                             } else{
                                                   printf("Uncertain\n");
                                                   }
                                            }
                                    } else{
                                           printf("Uncertain\n");
                                          }
            }
    return 0;
}
