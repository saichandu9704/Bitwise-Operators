/*Documentiation
  Sai Chandu
  10-01-24
  sample input:num = -2
               n = 3
  sample output:1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1 
  Description:to implement circular left shift
*/  
#include <stdio.h>

int circular_left(int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    //printf("Enter the num:");
    scanf("%d", &num);
    
    //printf("Enter n:");
    scanf("%d", &n);
    if(n>=1 && n<=31)
    {
        ret = circular_left(num, n);
        printf("Result in Binary: ");
        print_bits(ret);
    }
    else
    {
        printf("Invalid Input");
    }
}

int circular_left(int num,int n)
{
    
        if(num & (1<<31))
        {
            num=num<<n;
            return num | ((1<<n)-1);
        }
        else
        {
            num=num<<n;
            return num;
        }
}

int print_bits(int ret)
{
    for(int i=31;i>=0;i--)
    {
        printf("%d ",(ret&(1<<i))!=0);
    }
}