#include <stdio.h>
int main()
{
    int i, j,r,k;
    scanf("%d", &r);
    
    if (0<r&& r<25){
    for (i = 1; i <= r; i++)
    {
        for (k = 1;k <= r- i;k++)
        {
          printf("  ");
        }
        for (j=1;j<= 2*i-1;j++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
     }
     else {
        printf("Invalid Input");
     }
    return 0;
}
