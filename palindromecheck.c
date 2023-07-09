#include <stdlib.h>
#include <stdio.h>
int main() {
    int n,originalnum;
    int reverse;
    int remainder;
    scanf("%d",&n);
    originalnum=n;
    n=abs(n);
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(originalnum==reverse){
        printf("Is a palindrome.");
    }
    else
    {
        printf("Is not a palindrome.");
    }
    return 0;
}
