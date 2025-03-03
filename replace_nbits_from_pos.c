/*Documentiation
  Sai Chandu
  09-01-24
  sample input:num = 11
               a = 3
               b = 5
               val = 174
  sample output:Result = 158
  Description:to put the b-a+1 LSB of num into val
*/  
#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    if((a<=b && b<=31))
    {
        res = replace_nbits_from_pos(num, a, b, val);
        printf("Result = %d\n", res);
    }
    else
    {
        printf("Error\n");
    }
    
}
int replace_nbits_from_pos(int num,int a,int b,int val)
{
    int n=(b-a+1);
    num=num & (1<<n)-1;
    val=val & (~(((1<<((b-a)+1))-1) << (b-a)+1));
    val=val | (num<<(b-a)+1);
    return val;
}
