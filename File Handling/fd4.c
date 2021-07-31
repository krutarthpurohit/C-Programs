/*Modify the above program such that it will read the information of person.
*/










#include<stdio.h>
#define M 3

struct telephone
{
    char name[30];
    long int number;
};

int main()
{
    int i;
    struct telephone person[M];
    FILE *fp;
    
    for (i=0;i<M;i++)
    {
        printf("Enter the name and number of person %d: ", i+1);
        scanf("%s %ld", person[i].name, &person[i].number);
    }
    
    fp = fopen("tele.txt","w");
    for(i=0;i<M;i++)
    fprintf(fp, "%s %ld\n", person[i].name, person[i].number);
    fclose(fp);
    
    fp=fopen("tele.txt","r");
    i=0;
    while(feof(fp)==0)
    {
        fscanf(fp, "%s %ld \n", person[i].name, &person[i].number);
        printf("Entered person's info is: %s %ld \n", person[i].name, person[i].number);
        i++;
    }
    fclose(fp);
    return 0;
}





























// #include<stdio.h>
// #define m 3
// struct telephone
// {
//     char name[30];
//     long number;
// };
// int main()
// {
// int i;
// struct telephone person[m];
// FILE *fp;
//     for (i=0;i<m;i++)
//     {
//     printf("Enter the information of person %d: ",i);
//     scanf("%s %ld",person[i].name,&person[i].number);
//     }
    
//     fp = fopen("tele.txt","w");
    
//     for(i=0;i<m;i++)
//     fprintf(fp,"%s %ld\n",person[i].name,person[i].number);
//     fclose(fp);

//     fp=fopen("tele.txt","r");
//     printf("Information: \n");
        
//     for(i=0;i<m;i++)
//     printf("%s %ld\n",person[i].name,person[i].number);

//     fclose(fp);
// return 0;
// }

// #include<stdio.h>
// #define M 3

// struct telephone
// {
//     char name[30];
//     long int number;
// };



































// #include<stdio.h>
// #define M 3

// struct telephone
// {
//     char name[30];
//     long int number;
// };

// int main()
// {
//     int i=0,tel;
//     struct telephone person[M];
//     FILE *fp;
    
//     for (i=0;i<M;i++)
//     {
//         printf("Enter the name and number of person %d : ", i+1);
//         scanf("%s %ld", person[i].name, &person[i].number);
//     }
    
//     printf("Enter the Telephone number: ");
//     scanf("%d",tel);
    
//     fp = fopen("tele.txt","w");
//     for(i=0;i<M;i++)
//     fprintf(fp, "%s %ld\n", person[i].name, person[i].number);
//     fclose(fp);
    

//     fp=fopen("tele.txt","r");
    
//     while(feof(fp)==0)
//     {
//         if(tel==(person[i].number))
//         {
//         fscanf(fp, "%s %ld \n", person[i].name, &person[i].number);
//         printf("Entered person's info is : %s %ld \n", person[i].name, person[i].number);
//         }
//     }
//     fclose(fp);
//     return 0;
// }