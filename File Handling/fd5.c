/*Modify the above program such that access the data file created in the above program and 
perform the following tasks.
i. Display telephone number of a particular customer identified by the name. 
ii. Display name of a particular customer identified by the telephone number.*/

#include<stdio.h>
#include<string.h>
#define m 3
struct telephone
{
    char name[30];
    long number;
};
int search(struct telephone person[], int);

int main()
{
int i, choice;
struct telephone person[m];
FILE *fp;
long int number; char name[20];
    for (i=0;i<m;i++)
    {
    printf("Enter the information of person %d: ",i);
    scanf("%s %ld",person[i].name,&person[i].number);
    }
    
    fp = fopen("tele.txt","w");
    
    for(i=0;i<m;i++)
    fprintf(fp,"%s %ld\n",person[i].name,person[i].number);
    fclose(fp);

    printf("Enter your choice,1 to for number OR 2 to search for name: ");
    scanf("%d",&choice);
    
    fp=fopen("tele.txt","r");
    for (i=0;i<m;i++)
    {
    fscanf(fp,"%s %ld\n",person[i].name,&person[i].number);
    }
    
    if (choice == 1)
    {
        printf("Enter name: ");
        scanf("%s",name);

        for ( i = 0; i < m; i++)
        {
            if ((strcmp(person[i].name,name))==0)
            {
                printf("Number is = %ld\n",person[i].number);
            }  
        }
    }
    else if(choice == 2)
    {
        printf("Enter number: ");
        scanf("%d",&number);

        for ( i = 0; i < m; i++)
        {
            if (person[i].number==number)
            {
                printf("Name is = %s\n",person[i].name);
            }
        }
    }
    else
    printf("Wrong choice entered");
    

return 0;
}
