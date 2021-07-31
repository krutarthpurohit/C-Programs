//Write a program to find the prime numbers between 1 to 10.

int main()
{
   int i,j,count=0;   // "count" to count the number of factorials 

  printf("The value between 1 to 5\n");

   for(i=2;i<=10;i++)             //this loop is used to extract single digit from the loop (10)     
    {     

        for(j=1;j<=i;j++)           //this loop will count the number of factorials of the extracted intiger
            {
                 if(i%j==0)
                 count++; 
            }


            if(count==2)
            printf("%d  \n\n",i);
            count=0;
    }
}