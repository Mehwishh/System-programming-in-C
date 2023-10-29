

#include <stdio.h>
struct Distance
{// Write a C program to add two distances in inch-feet system using structures.

    int ft;
    int inch;
};

int main()
{

    struct Distance dist1 = {0, 0};
    struct Distance dist2 = {6, 3};

    struct Distance dist3 = {dist1.ft + dist2.ft, dist1.inch + dist2.inch};

    printf("Distance = %d'%d", dist3.ft, dist3.inch);
    return 0;
}
