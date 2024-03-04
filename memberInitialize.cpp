#include <cstdio>

struct ClockOfTheLongNow
{
    ClockOfTheLongNow()
    {
    }

    ClockOfTheLongNow(long year_in)
    {
        if (!set_year(year_in))
        {
            year = 2019;
        }
    }

    long get_year() const
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
    long year;
};

struct Avout
{
    Avout(const char *name, long year_of_apert) : name{name}, apert{year_of_apert}
    {
    }

    void announce() const
    {
        printf("My name is %s and my next apert is %ld. \n", name, apert.get_year());
    }

private:
    const char *name;
    ClockOfTheLongNow apert;
};

int main()
{
    Avout raz{"Erasmas", 3010};
    Avout jad{"Jad", 4000};
    raz.announce();
    jad.announce();
}