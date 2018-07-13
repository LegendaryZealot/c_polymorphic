#include <stdio.h>

typedef void (*Func)();

typedef struct{
    Func func;
    int id;
}Base;

typedef struct
{
    Base base;
    int group;
}Derived;

void execute();

int main(int argc, char const *argv[])
{
    //declare
    Base base;
    Derived derived;
    Base *ptr;

    //init
    base.func=execute;
    base.id=1128;
    derived.base.func=execute;
    derived.base.id=1990;

    ptr=&base;
    printf("%d\n",ptr->id);
    ptr->func();

    ptr=(Base *)&derived;
    printf("%d\n",ptr->id);
    ptr->func();

    return 0;
}

void execute()
{
    printf("Executed!\n");
}

