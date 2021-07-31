#include<stdio.h>
void Rank();
int main(int argc, char const *argv[])
{
    int student[5][4], i, j;

        for( i=0; i<5; i++)
        {    for ( j = 0; j < 4; j++)
            {
                if( (i==0 && j==0) || (i==1 && j==0) || (i==2 && j==0) || (i==3 && j==0) || (i==4 && j==0) )     
                   {
                        printf("Enter the Roll Number: ");
                        scanf("%d",&student[i][j]);
                   }

                else
                   {
                       printf("Enter the Sessional marks (%d): ",j);
                       scanf("%d",&student[i][j]);
                   }
              }
        }
    Rank(student);
    return 0;
}
void Rank(int arr[5][4])
{
    int i,j,total_marks[5],sum=0,temp;
    printf("\n\nRoll number and Sessional marks details\n"); 
    
    for( i=0; i<5; i++)
        {    for ( j = 0; j < 4; j++)
             {
                 if ((i!=0 && j!=0) || (i!=1 && j!=0) || (i!=2 && j!=0) || (i!=3 && j!=0) || (i!=4 && j!=0))
                    { sum=sum+ arr[i][j];
                        for (int k = 0; k < i; k++)
                        {
                            total_marks[k]=sum;
                        }  
                    }
             }
        }
        for ( i = 0; i <5; i++)
        {
            printf("\nTotal Marks: %d",total_marks[i]);
        }
        for(i=0;i<5;i++)
        {
            for (j = i+1; j < 5; j++)
            {
                if(total_marks[i]<total_marks[j])
                {    temp=total_marks[i];
                     total_marks[i]=total_marks[j];
                     total_marks[j]=temp;
                }
            }
        }
        for ( i = 0; i <5; i++)
        {
            printf("\nReturn Highest Marks: %d",total_marks[i]);
        }
        
}
