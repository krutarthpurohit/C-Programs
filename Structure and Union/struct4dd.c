// This program is similar to the program of struct4.c. But here we have use goto statement to use the program in a loop.
////////////////////////////////////Nisarg added line 50 to update the stocks//////////////////////////////////////////
#include<stdio.h>
#include<string.h>

struct inventory
{
    char author[50], title[50], publisher[50];
    int stock_position;
    float price;
}inv[4];

int search(struct inventory inv[],char tit[], char aut[]);

int main()
{
    int new1;
    int recieve, num_books;   float cost;
    char search_title[50], search_author[50];
    struct inventory inv[4]= {  {"Krutarth Purohit", "Theory of Coding", "Purohit Publications", 12 , 524.09},
                                {"Dhruv Thakor", "C Programing", "Sharma Publications", 22 , 320.50},
                                {"Aadi Shah", "Light", "Ram Publications", 92 , 220.50},
                                {"Harmya Bhatt", "The Ultimate", "22 Publications", 9 , 450.50}};

   label: fflush(stdin);
          printf("\nEnter the Title of the book: ");
          gets(search_title);
          fflush(stdin);

          printf("\nEnter the Author of the book: ");
          gets(search_author);
          fflush(stdin);
          recieve= search(inv,search_title,search_author);

          if(recieve!= -1)
            {
                printf("Recieve= %d\n",recieve);
                printf("Author Name: %s\nBook Title: %s\nPublisher Name: %s\nStock Persent: %d\nBook Price: %.2f\n",inv[recieve].author,inv[recieve].title,inv[recieve].publisher,inv[recieve].stock_position,inv[recieve].price);

                printf("\nEnter number of books you want to purchase: ");
                scanf("%d",&num_books);

                fflush(stdin);
                    if (num_books <= inv[recieve].stock_position)
                        {
                            printf("\nBooks Available\n");

                            cost=num_books*(inv[recieve].price);

                            inv[recieve].stock_position-=num_books;  // This statement was remaining
                           // printf("\n ---------------Now remaining: %d",inv[recieve].stock_position);

                            printf("\nFinal Cost: Rs. %.3f\n", cost);
                        }
                    else
                        {
                            printf("\nBooks are OUT OF STOCK!\n");
                        }

            }
            else
                printf("\n\nBook not found :/\n\n");


            printf("Search Again, press 9\n");
            scanf("%d",&new1);

            if (new1==9)
                {
                    goto label;
                }

            else
                printf("Thank you for visiting!\n");

            return 0;
}

int search(struct inventory inv[],char tit[], char aut[])
{
    for(int i=0; i<4;i++)
    {
        if(strcmp(tit,inv[i].title)==0 && strcmp(aut,inv[i].author)==0 )  // if no difference is found, string are equal
            return i;
    }
    return (-1);
}
