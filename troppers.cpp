#include <cstdio>

struct Element
{
    Element *next{};

    void insert_after(Element *new_element)
    {
        new_element->next = next;
        next = new_element;
    }

    char prefix[2];

    short operating_number;
};

void showTrp(Element *element)
{
    for (element; element; element = element->next)
    {
        printf("Tropper %c%c-%d \n", element->prefix[0], element->prefix[1], element->operating_number);
    }
}

int main()
{

    Element trp1, trp2, trp3;

    trp1.prefix[0] = 'T';
    trp1.prefix[1] = 'k';
    trp1.operating_number = 421;
    trp1.insert_after(&trp2);

    trp2.prefix[0] = 'F';
    trp2.prefix[1] = 'N';
    trp2.operating_number = 2187;
    trp2.insert_after(&trp3);

    trp3.prefix[0] = 'L';
    trp3.prefix[1] = 'S';
    trp3.operating_number = 005;

    showTrp(&trp1);

    return 0;
}