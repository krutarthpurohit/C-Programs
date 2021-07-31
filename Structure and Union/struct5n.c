#include<stdio.h>
#include<string.h>
struct cricket
{
 char Player_name[20];
 char Team_name[20];
 float Bat_avg;
};
int main()
{
 struct cricket player[50],t;
 
    int n;
    int i, j;
 
    printf("No of player's detail you want to enter : ");
        scanf("%d", &n);
 
    printf("Enter Data Of %d Player\n",n);
        for(i=0;i<n;i++)
        {
            printf("\nEnter Player Name,Team Name and Batting Average for player %d : \n",i+1);
            scanf("%s %s %f",player[i].Player_name,player[i].Team_name,&player[i].Bat_avg);
        }
 
        for(i=1;i<=n-1;i++)
        {
            for(j=0;j<=n-i;j++)
                {
                    if(strcmp(player[j-1].Team_name,player[j].Team_name)>0)
                    {
                        t=player[j-1];
                        player[j-1]=player[j];
                        player[j]=t;
                    }
                }
        }
 
        printf("\nAfter Teamwise Sorting, Player's list is");
        for(i=0;i<n;i++)
             printf("\n%s\t%s\t%f",player[i].Player_name,player[i].Team_name,player[i].Bat_avg);
 
 return 0;
}