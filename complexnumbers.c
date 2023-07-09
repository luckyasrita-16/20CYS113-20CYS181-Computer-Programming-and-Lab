#include<stdio.h>
int main(){
                struct complex_no
                { int real;
                  int img;
                }c[2];
                scanf("%d",&c[0].real);
                scanf("%d",&c[0].img);
                scanf("%d",&c[1].real);
                scanf("%d",&c[1].img);


                printf("%d+%di\n", (c[0].real+c[1].real),(c[0].img+c[1].img));
                printf("%d+%di",(c[0].real-c[1].real),(c[0].img-c[1].img));






}
