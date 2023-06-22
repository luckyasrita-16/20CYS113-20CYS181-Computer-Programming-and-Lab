#include <stdio.h>
struct complexnumber{
int areal,aimg,cimg,creal,bimg,breal;

}comp[2];
int  main(){
printf("enter the real part of a ");
scanf("%d",&comp.areal);
printf("enter the img part of a");
scaanf("%d",&comp.aimg);
printf("enter the real part of b");
scanf("%d",&comp.breal);
printf("enter the img part of b");
scanf("%d",&comp.bimg);
creal=comp.areal*comp.breal;
cimg=comp.aimg*comp.bimg;
printf("the result of addition is %di+%d",creal,cimg);
return 0;
}
