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
        
        printf("Score: Opp = %d\t You = %d\n",x,y);
        printf("Enter '1' for rock '2' for paper and '3' for scissor:)\n");
        scanf("%d",&you);
        if(you==1 || you==2 || you==3){

            if(you==opp){
                result=0;
            }

            if(you==1 && opp==3){
                result=1;
                y++;
            }
            else if(you==3 && opp==1){
                result=-1;
                x++;
            }
            if(you==3 && opp==2){
                result=1;
                y++;
            }
            else if(you==2 && opp==3){
                result=-1;
                x++;
            }
            if(you==2 && opp==1){
                result=1;
                y++;
            }
            else if(you==1 && opp==2){
                result=-1;
                x++;
            }
             
            if(result==0){
                printf("Game draw:(\n");
                printf("***********************************************\n\n");
            }
            else if(result==1){
                printf("You are the winner:)\n");
                printf("***********************************************\n\n");
            }
            else
            {
                printf("You lose:(\n");
                printf("***********************************************\n\n");
            }

        }
        else{
            printf("Error:(\n");
            printf("I Think you have Pressed wrong Key number please Press correct key Play game:(\n");
            printf("*************************************************************************************************\n\n");
        }
    }
    if(w==y){
        printf("Score: Opp = %d\t You = %d\n",x,y);
        printf("## You won the Game:) ##\n");
    }
    else{
        printf("Score: Opp = %d\t You = %d\n",x,y);
        printf("## Opp won the game:( ##\n");
    }
    printf("                               ***************Thank you for playing our game:)***************\n");
}

int main(){
    int f;
    while(1){
        printf("Press 1 to Start Game:)\n");
        printf("Press 0 to Exit Game:)\n");
        scanf("%d",&f);
        if(f==1){
            setup();
            printf("************************************************************************************************************************\n");
        }
        else{
            return 0;
        }
    }
    return 0;
}

//This is the main source code for this project:)
