/*Write a function and use the same function for reading and printing the data by passing 
structure.*/

#include<stdio.h>
struct employee
{
int id_no;
char sex[6];
float height, weight; 
}emp[3];

void print_struct(struct employee emp[3]);

int main()
{
    int i;
    struct employee emp[3];

    print_struct(emp);
    
return 0;
}

void print_struct(struct employee emp[3])
{
    for(int i=0;i<=2;i++)
    {   
        printf("_______________________________");
        printf("\nEnter ID: ");
        scanf("%d", &emp[i].id_no);
        
        printf("\nEnter sex: ");
        scanf("%s",&emp[i].sex);
        
        printf("\nEnter Height: ");
        scanf("%f", &emp[i].height);
        
        printf("\nEnter Weight: ");
        scanf("%f", &emp[i].weight);
    }
    
    for(int i=0;i<=2;i++)
    {
    printf("\nIn Record No: %d",i);
    printf("\n ID=%d \tSex=%s \t Height=%.3f \t weight=%.3f \n\n", emp[i].id_no, emp[i].sex, emp[i].height, emp[i].weight);
    }

}