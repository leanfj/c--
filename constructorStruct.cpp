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

int main()
{
    ClockOfTheLongNow clock(2018);
    printf("Default year: %d", clock.get_year());
    return 0;
}