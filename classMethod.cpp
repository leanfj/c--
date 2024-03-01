#include <cstdio>

class ClockOfTheLongNow
{
  int year;

public:
  void add_year()
  {
    year++;
  }

  bool set_year(int new_year)
  {
    if (new_year < 2019)
    {
      return false;
    }
    year = new_year;

    return true;
  }

  int get_year()
  {
      return year;
  }
};

int main()
{
  ClockOfTheLongNow clock;

  clock.set_year(2022);

  printf("year: %d \n", clock.get_year());

  return 0;
}
