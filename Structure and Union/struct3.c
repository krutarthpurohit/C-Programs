/*Add a field as DOB, making the use of nested structure.*/

#include<stdio.h>
struct employee
{
int id_no;
char sex[6];
float height, weight;
    struct DOB
    {
        int birth;
    }db;  

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
        
        printf("\nEnter DOB: ");
        scanf("%d", &emp[i].db.birth);
    }
    
    for(int i=0;i<=2;i++)
    {
    printf("\nIn Record No: %d",i);
    printf("\n ID=%d \tSex=%s \t Height=%.3f \t weight=%.3f \t DOB=%d \n\n", emp[i].id_no, emp[i].sex, emp[i].height, emp[i].weight,emp[i].db.birth);
    }

}