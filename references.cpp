#include <cstdio>

struct ClockOfTheLongNow
{

    ClockOfTheLongNow(int year_in)
    {
        if (!set_year(year_in))
        {
            year = 2019;
        }
    }

    int get_year()
    {
        return year;
    }

    bool set_year(int year_in)
    {
        if (year_in < 2019)
        {
            return false;
        }

        year = year_in;

        return true;
    }

private:
    int year;
};

void add_year(ClockOfTheLongNow &clock)
{
    clock.set_year(clock.get_year() + 1);
}

int main()
{
    ClockOfTheLongNow clock(2019);

    printf("The year is %d. \n", clock.get_year());

    add_year(clock);

    printf("The year is %d. \n", clock.get_year());
}