/*Write a user defined function Rank() which will print the index of the student has maximum 
total marks. Total number of student are 50 and three sessional marks. Write an appropriate 
main() for demonstrating the use of Rank().Modify the above program using with return 
type with argument method*/

#include<stdio.h>
int main()
{
 int Rank(int [][4], int, int);
 
 int stu[5][4];
 int i, j;
 
 printf("Enter student roll no. & s1, s2 and s3 marks : ");
    for(i=0; i<5; i++)
       for(j=0; j<4; j++)
            scanf("%d", &stu[i][j]);
    
    
 
 printf("\nEntered student roll no. & s1, s2 and s3 marks are : \n");
    for(i=0; i<5; i++)
     {   for(j=0; j<4; j++)
            {
                printf("%d\t", stu[i][j]);
            }
              printf("\n");
     }
 
 
    Rank(stu, 5, 4);
    return 0;
}
int Rank(int stu[5][4], int row, int col)
{
 int stotal[5]={0}, Sum, largest, index=0;
 int i, j;
 
    for(i = 0; i < 5; i++)
    {
        Sum = 0;
            for(j = 1; j < 4; j++)
                Sum = Sum + stu[i][j];
                stotal[i]=Sum;
    }
 
    largest = stotal[0];
 
    for (i = 1; i < 5; i++) 
    {
        if (largest < stotal[i])
        {
            largest = stotal[i];
            index=i;
        }
    }
 
 printf("\nMaximum marks obtained by student is %d, his/her index is %d.", largest, index+1);
}