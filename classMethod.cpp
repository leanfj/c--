#include <cstdio>

struct ClockOfTheLongNow {
int year;

 void add_year() {
   year++;
 }

};

int main() {
  ClockOfTheLongNow clock;

  clock.year = 2017;
  clock.add_year();

  printf("year: %d \n", clock.year);

  clock.add_year();

  printf("year: %d \n", clock.year);

  return 0;
}
