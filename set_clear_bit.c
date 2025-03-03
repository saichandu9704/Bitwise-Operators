/*Documentiation
  Sai Chandu
  02-01-24
  sample input:Number is 19
               N value is 1
               M value is 4
  sample output:Updated value of num is 3
  Description:to check Nth bit is set or not, if its set clear the Mth bit 
*/  
#include<stdio.h>
int main()
{
    int num,N,M;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter 'N': ");
    scanf("%d",&N);
    printf("Enter 'M': ");
    scanf("%d",&M);
    if((num&(1<<N))!=0)
    {
        num=(num&~(1<<M));
    }
    printf("Updated value of num is %d",num);
}