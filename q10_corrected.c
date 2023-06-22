#include <stdio.h>
struct complexnumbers{
float real;
float imag;
};
int main(){
struct complexnumbers num1,num2,sum,mul;
printf("enter the real and imaginary parts of first complex number\n");
scanf("%f %f",(&num1.real),(&num1.imag));
printf("enter the real and  imagianry parts of second complex number\n");
scanf("%f %f",(&num2.real),(&num2.imag));
sum.real=num1.real+num2.real;
sum.imag=num1.imag+num2.imag;
printf("sum: %f + %fi\n",sum.real,sum.imag);

mul.real=num1.real*num2.real;
mul.real=num1.real*num2.real;
printf("mul: %f + %fi\n",mul.real,mul.imag);
return 0;
}

