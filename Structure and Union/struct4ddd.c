#include<stdio.h>
#include<string.h>
struct books
{
float price;
char author[20],title[20],publisher[20];
int stock;
};
int main( )
{ 
void read(struct books []);
void print(struct books []);
void search(struct books []);
char a,t;
struct books B[5];
read(B);
print(B);
search(B);
return 0;
}
void read(struct books B[])
{
    int i;
    char dmy;
    
    for(i=0;i<5;i++)
    {
    printf("\nEnter author : ");
        scanf("%s",B[i].author);
        
        dmy=getchar();

    printf("\nTitle : ");
        scanf("%s",B[i].title);

        dmy=getchar();
    
    printf("\nEnter publisher : ");
        scanf("%s",B[i].publisher);

    printf("\nEnter price : ");
        scanf("%f",&B[i].price);
    
    printf("\nEnter stock : ");
        scanf("%d",&B[i].stock);
    }
}
void print(struct books B[])
{
int i;

    for(i=0;i<5;i++)
    {
    printf("\nbook number : %d\n",i+1);
    printf("\nauthor : %s",B[i].author);
    printf("\nTitle : %s",B[i].title);
    printf("\npublisher : %s",B[i].publisher);
    printf("\nprice : %f",B[i].price);
    printf("\nstock : %d",B[i].stock);
    }
}
void search(struct books b[])
{
    int i;int cp;
    float cost;
    char a[20],t[20];
    
    printf("\nEnter the title and author name : \n");
    scanf("%s %s",t,a);

    for(i=0;i<5;i++)
    {
      if(!(strcmp(b[i].title,t)&& strcmp(b[i].author,a))) 
        {
        printf("Book is available\n");
        printf("Enter no.of copies : ");
            scanf("%d",&cp);
            if(cp<=b[i].stock)
            {
                cost = cp * b[i].price;
                printf("Total price is : %f",cost);
            }
            break;
        }
    }
}