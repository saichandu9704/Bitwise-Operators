/*Documentiation
  Sai Chandu
  15-01-24
  sample input:num = 12
               n = 3
  sample output:1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1
  Description:to implement circular right shift
*/  
#include <stdio.h>

int circular_right(int, int);
void print_bits(int);

int main()
{
    int num, n, ret;
    
    //printf("Enter the num:");
    scanf("%d", &num);
    
    //printf("Enter n:");
    scanf("%d", &n);
    //print_bits(num);
    if(n>=1 && n<=32)
    {
        printf("Result in Binary: ");
        ret = circular_right(num, n);
        print_bits(ret);
    }
    else
    {
        printf("Invalid Input");
    }
    

}
int circular_right(int num,int n)
{
    for(int i=0;i<n;i++)
    {
        if(num&1)
        {
            num=num>>1;
            num=num|(1<<31);
        }
        else
        {
            num=num>>1;
            num=num&(~(1<<31));
        }
    }
    return num;
}
void print_bits(int ret)
{
    for(int i=31;i>=0;i--)
    {
        printf("%d ",(ret&(1<<i))!=0);
    }
}