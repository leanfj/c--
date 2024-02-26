#include <cstdio>

int step_funtcion(int x)
{
    int result = 0;

    if (x < 0)
    {
        result = -1;
    }
    else if (x > 0)
    {
        result = 1;
    }

    return result;
}

int main()
{
    int value1 = step_funtcion(100);
    int value2 = step_funtcion(0);
    int value3 = step_funtcion(-10);

    printf("%d \n\n", value1);

    printf("Ten %d, Twenty %d, Thirty %d \n\n", 10, 20, 30);

    return 0;
}