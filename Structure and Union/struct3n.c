#include<stdio.h>
struct employee
{
int id_no;
char sex[6];
float height, weight;
    struct DOB
    {
        int birth_date;
        int birth_month;
        int birth_year;
    }db;  

}emp[2];

void print_struct(struct employee emp[2]);
void print_elder(struct employee emp[2]);

int main()
{
    int i;
    struct employee emp[2];

    print_struct(emp);
    
return 0;
}

void print_struct(struct employee emp[2])
{
    for(int i=0;i<2;i++)
    {   
        printf("_______________________________");
        printf("\nEnter ID: ");
        scanf("%d", &emp[i].id_no);
        
        // printf("\nEnter sex: ");
        // scanf("%s",&emp[i].sex);
        
        // printf("\nEnter Height: ");
        // scanf("%f", &emp[i].height);
        
        // printf("\nEnter Weight: ");
        // scanf("%f", &emp[i].weight);
        
        printf("\nEnter Birth DATE: ");
        scanf("%d", &emp[i].db.birth_date);

        printf("\nEnter Birth MONTH: ");
        scanf("%d", &emp[i].db.birth_month);

        printf("\nEnter Birth YEAR: ");
        scanf("%d", &emp[i].db.birth_year);
    }
    print_elder(emp);

}
void print_elder(struct employee emp[2])
{
    for (int i = 0; i < 2; i++)
    {

        if(emp[i].db.birth_year<=emp[i+1].db.birth_year)
            if (emp[i].db.birth_month<=emp[i+1].db.birth_year)
                if (emp[i].db.birth_date<=emp[i+1].db.birth_date)
                     printf("%d is elder than %d",emp[i+1].id_no,emp[i].id_no);
                
        
        else
           printf("%d is elder than %d",emp[i].id_no,emp[i+1].id_no); 
    }
    
}