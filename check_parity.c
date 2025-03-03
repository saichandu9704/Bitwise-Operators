/*Documentiation
  Sai Chandu
  02-01-24
  sample input:Number is 7
  sample output:Number of set bits is 3
                Bit parity is Odd
  Description:to count number of set bits in number and print parity 
*/  
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    //counting number of set bits
    for(int i=31;i>=0;i--)
    {
        if((num&(1<<i))!=0)
        {
            count++;
        }
    }
    printf("Number of set bits = %d\n",count);
    //number of count bits are odd or even
    if((count&1)!=0)
    {
        printf("Bit parity is Odd");
    }
    else
    {
        printf("Bit parity is Even");
    }
}