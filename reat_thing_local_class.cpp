#include <cstdio>

struct RatThing
{
  static int rat_thing_powers;
  static void power_up_rat_thing(int nuclear_isotopes)
  {
    rat_thing_powers = rat_thing_powers + nuclear_isotopes;

    const auto waste_heat = rat_thing_powers * 20;
    if (waste_heat > 10000)
    {
      printf("Warning! Hot doggie\n");
    }
    printf("Rat-Thing power: %d\n", rat_thing_powers);
  }

};


int RatThing::rat_thing_powers = 200; 

int main()
{
  RatThing::power_up_rat_thing(100);
  RatThing::power_up_rat_thing(500);

}
