#include <cstdio>

int main() {
    int gettysburg{};

    printf("gettysburg: %d \n", gettysburg);

    int *gettysburg_address = &gettysburg;

    printf("gettysburg: %p \n", gettysburg_address);

    *gettysburg_address = 17325;

    printf("Value at gettysburg_address: %d \n", *gettysburg_address);

    printf("gettysburg: %p \n", gettysburg_address);

}