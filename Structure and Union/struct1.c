/*Make provisions for reading the data input from the user.*/

#include<stdio.h>
struct employee
{
int id_no;
char sex[2];
float height, weight;
}emp[3];

int main()
{
 int i;
 struct employee emp[3];

 printf("\nEnter data for continuous \n");
    
    for(i=0;i<=2;i++)
    {   
        printf("\nEnter ID: ");
        scanf("%d", &emp[i].id_no);
        
        printf("\nEnter sex: ");
        scanf("%s",&emp[i].sex);
        
        printf("\nEnter Height: ");
        scanf("%f", &emp[i].height);
        
        printf("\nEnter Weight: ");
        scanf("%f", &emp[i].weight);
    }

    for(i=0;i<=2;i++)
    {
    printf("\n\nRecord No: %d",i);
    printf("\n ID=%d \n Sex=%s \n Height=%.3f \n Weight=%.3f", emp[i].id_no, emp[i].sex, emp[i].height, emp[i].weight);
    }
    
return 0;
}
