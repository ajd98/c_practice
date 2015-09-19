#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}


int main(int argc, char *argv[])
{
    // make two people structures
    struct Person joe;
    joe.name = "Joe Alex";
    joe.age = 32;
    joe.height = 64;   
    joe.weight = 140;

    struct Person frank; 
    frank.name = "Frank Black";
    frank.age = 20;
    frank.height = 72;
    frank.weight = 180;

    printf("Name: %s\n", joe.name);
    printf("\tAge: %d\n", joe.age);
    printf("\tHeight: %d\n", joe.height);
    printf("\tWeight: %d\n", joe.weight);

    printf("Name: %s\n", frank.name);
    printf("\tAge: %d\n", frank.age);
    printf("\tHeight: %d\n", frank.height);
    printf("\tWeight: %d\n", frank.weight);


    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;

    frank.age += 20;
    frank.weight += 20;

    printf("Name: %s\n", joe.name);
    printf("\tAge: %d\n", joe.age);
    printf("\tHeight: %d\n", joe.height);
    printf("\tWeight: %d\n", joe.weight);

    printf("Name: %s\n", frank.name);
    printf("\tAge: %d\n", frank.age);
    printf("\tHeight: %d\n", frank.height);
    printf("\tWeight: %d\n", frank.weight);

    Person_print(joe);
    Person_print(frank);


    return 0;
}
