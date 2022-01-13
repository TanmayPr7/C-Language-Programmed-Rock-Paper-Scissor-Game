# This is the basic program to generate any random number between any two(2) numbers you want

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));
    num=rand()%100;
    printf("Random generated is %d\n",num);
    return 0;
}

//This is the basic program to generate randon numbers:)
