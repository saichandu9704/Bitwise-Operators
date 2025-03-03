/*Documentiation
  Sai Chandu
  02-01-24
  sample input:num = 10
               n bits = 3
  sample output:Result = 2
  Description:to get n bits of a given number
*/  
#include <stdio.h>

int get_nbits(int, int);

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);
    
    printf("Result = %d\n", res);
}
int get_nbits(int num,int n)
{
    return num&(~(-1<<n));
}