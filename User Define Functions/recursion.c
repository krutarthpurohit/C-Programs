#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5]={5,10,15,20,25};
    int i;
    for ( i = 0; i < 3; i++)
    {
        printf("%d %d\t",++a[i],a[i++]);
    }
    
    return 0;
}

#include<stdio.h>
void main()
{

    static num=4;
    
        printf("%d ",--num);

        if (num)
        {
            main();
        }
}
