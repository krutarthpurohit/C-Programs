#include<stdio.h>
struct employee
{
int id_no;
char sex;
float height, weight;
};
 
int main()
{
    int i;
    struct employee emp[3]={ { 121, 'j' ,5.7,59.8},{122, 'f' ,6.0,65.2},{123, 'm' ,6.2,75.5} }; 
    
    for(i=0;i<=2;i++)
    {
        printf("\n\nIn Record No: %d",i);
        printf("\n ID=%d \n Sex=%c \n Height=%.2f \n weight=%.2f",emp[i].id_no,emp[i].sex,emp[i].height,emp[i].weight);
    }
return 0;
}
