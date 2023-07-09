#include <stdio.h>
 int isprime(number){
     int n,i,c=0;
     scanf("%d",&number);
     for(i=1;i<=number;i++){
         if(number%i==0){
             c++;
         }
     }
     if(c==2){
         return 1;
     }
     else 
     return 0;
 }
 int generateprime(s,e){
     int i,m;
     printf("Prime numbers between %d and %d are:\t", s, e);
     for(i=s;i<=e;i++){
         isprime(i);
         if(isprime(i)){
             printf("%d\t",i);
             }
         }
         return 0;
     }
     int main(){
         int s,e;
         scanf("%d",&s);
         scanf("%d",&e);
         generateprime(s,e);
         return 0;
     }
     
