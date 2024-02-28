#include <cstdio>
struct ClockOfTheLongNow
{
    ClockOfTheLongNow() {

    }

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
    ClockOfTheLongNow clock;
    ClockOfTheLongNow* clock_ptr = &clock;

    clock_ptr->set_year(2020);

    printf("address clock: %p \n", clock_ptr);

    printf("Default year: %d", clock_ptr->get_year());
    return 0;
}