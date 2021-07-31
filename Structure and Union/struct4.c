/*Model a bookshop inventory program to maintain the inventory of books. The list includes 
details such as author, title, price, publisher, stock position etc. Whenever the customer 
wants a book, the shopkeeper inputs the title and the author name of the book and the 
system replies whether it is in the list or not. If it is in the list, then the system displays the 
book details and asks for the number of copies. If the requested copies are available, the 
total cost of the books is displayed. Use the concept of passing structures to functions.*/

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
    int new;
    int recieve, num_books;     float cost;
    char search_title[50], search_author[50]; 
    struct inventory inv[4]= {  {"Krutarth Purohit", "Theory of Coding", "Purohit Publications", 12 , 524.09}, 
                                {"Dhruv Thakor", "C Programing", "Sharma Publications", 22 , 320.50},
                                {"Aadi Shah", "Light", "Ram Publications", 92 , 220.50},
                                {"Harmya Bhatt", "The Ultimate", "22 Publications", 9 , 450.50}};
    
    printf("\nEnter the Title of the book: ");
    gets(search_title);

    printf("\nEnter the Author of the book: ");
    gets(search_author);

    recieve= search(inv,search_title,search_author);

    if(recieve!= -1)
        {
            printf("Recieve= %d\n",recieve);
            printf("Author Name: %s\nBook Title: %s\nPublisher Name: %s\nStock Persent: %d\nBook Price: %.2f\n",inv[recieve].author,inv[recieve].title,inv[recieve].publisher,inv[recieve].stock_position,inv[recieve].price);
            
            printf("\nEnter number of books you want to purchase: ");
            scanf("%d",&num_books);
                
                if (num_books <= inv[recieve].stock_position)
                {
                    printf("\nBooks Available\n");
                    
                    cost=num_books*(inv[recieve].price);
                    
                    printf("\nFinal Cost: Rs. %.3f\n", cost);
                }
                else
                {
                    printf("\nBooks are OUT OF STOCK!\n");
                }
                
        }    
    else
        printf("\n\nBook not found :/\n\n");


    return 0;
}

int search(struct inventory inv[],char tit[], char aut[])
{  
    for(int i=0; i<4;i++)
        if(strcmp(tit,inv[i].title)==0 && strcmp(aut,inv[i].author)==0 )  // if no difference is found, string are equal
            return i;
    
    return (-1);
}