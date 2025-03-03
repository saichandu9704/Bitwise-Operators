/*Documentiation
  Sai Chandu
  08-01-24
  sample input:num = 10
               no of bits = 3
               val = 12
  sample output:Result = 12
  Description:to replace n bits of given number
*/  
#include <stdio.h>

int replace_nbits(int, int, int);

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}
int replace_nbits(int num,int n,int val)
{
    num=num&(-1<<n);
    num=num|val;
    return num;
}