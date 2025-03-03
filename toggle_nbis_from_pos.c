/*Documentiation
  Sai Chandu
  08-01-24
  sample input:num = 10
               no of bits = 3
               pos = 5
  sample output:Result = 50
  Description:to toggle n bits fro, given position of a number
*/  
#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    if((n>=1 && n<=32) && (pos>=0 && pos<=31))
    {
        res = toggle_nbits_from_pos(num, n, pos);
        printf("Result = %d\n", res);
    }
    else
    {
        printf("Invalid inputs");
    }
}
int toggle_nbits_from_pos(int num,int n,int i)
{
    i = ((1<<n)-1)<<(i-n)+1;
    return num^i;
}