# Thsi is the basic source code for this C language programmed Rock, Paper and Scissor game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int setup()
{
    int you,opp;
    int n,w;
    int x=0;
    int y=0;
    int result;
    printf("                           ***************Welcome to our Rock Paper Sicssor game:)***************\n");
    printf("                                                 Please play and enjoy it:)\n\n");
    printf("Set your Target Points:)\n");
    scanf("%d",&w);
    printf("                                              Score %d points to win the match:)\n\n",w);
    while(x!=w && y!=w){
        srand(time(0));
        n=rand()%3 +1;
        if(n==1){
            opp=1;
        }
        else if(n==2){
            opp=2;
        }
        else{
            opp=3;
        }
