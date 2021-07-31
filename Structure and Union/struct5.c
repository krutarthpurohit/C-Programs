/*Define a structure called cricket that will describe the following information:Player name, 
team name, batting average. Using cricket, declare an array player with 50 elements and 
write a program to read the information about all the 50 players. Also print a team wise list 
containing names of players with their batting averages.*/

#include<stdio.h>
#include<string.h>
struct cricket
{
    char player_name[50]; 
    char team_name[50];
    float batting_avg;
};

int main()
{
    struct cricket crt[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nEnter the name of the player: ");
        scanf("%s",crt[i].player_name);

        printf("Enter the name of the team: ");
        scanf("%s",crt[i].team_name);

        printf("Enter the batting average : ");
        scanf("%f",&crt[i].batting_avg);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if( strcmp(crt[i].team_name,crt[j].team_name) ==0)
            {
             printf("\n\nTeam: %s", crt[i].team_name);
             printf("\nName of the player: %s \tbatting average : %.2f  \n",crt[i].player_name,crt[i].batting_avg);
             printf("Name of the player: %s \tbatting average : %.2f",crt[j].player_name,crt[j].batting_avg); 
             break;
            }
        }
    }
    return 0;
}
