//Your program should first read an integer representing the total population of the area. Knowing that a person
// was infected on day 1 and that each infected person contaminates two new people every day, you must calculate
//the day at which the entire population of the area will be infected.
#include <stdio.h>
int main(void){
    int total_population=0;
    scanf("%d", &total_population);
    int people_infected=1;
    int new_people_infected=0;
    int day=1;
    while (people_infected<total_population){
        day++;
        new_people_infected = 2 * people_infected;
        people_infected = new_people_infected + people_infected;
    }
    printf("%d", day);
    return 0;
}
