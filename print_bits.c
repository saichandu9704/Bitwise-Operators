/*Documentiation
  Sai Chandu
  08-01-24
  sample input:num = 10
            n bits = 12
  sample output:Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
  Description:to print n bits from LSB of a number
*/  
#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    if(n<=31 && n>=1)
    {
        printf("Binary form of %d:", num);
        print_bits(num, n);
    }
    else
    {
        printf("Invalid input\n");
    }
 }
 
 int print_bits(int num,int n)
 {
     for(int i=n-1;i>=0;i--)
     {
         printf("%d ",(num&(1<<i))!=0);
     }
 }