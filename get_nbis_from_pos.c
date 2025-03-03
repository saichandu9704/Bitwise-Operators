/*Documentiation
  Sai Chandu
  08-01-24
  sample input:num = 12
               no of bits = 3
               pos = 4
  sample output:Result = 3
  Description:to get n bits from given position of a number
*/  
#include <stdio.h>

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    if((n>=1 && n<=32) && (pos>=0 && pos<=31))
    {
        res = get_nbits_from_pos(num, n, pos);
        printf("Result = %d\n", res);
    }
    else
    {
        printf("Invalid Inputs");
    }
}
int get_nbits_from_pos(int num,int n,int i)
{
    int j=i;
    i = ((1<<n)-1)<<(i-n)+1;
    num = num&i;
    return num>>(j-n)+1;
}