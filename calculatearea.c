#include <stdio.h>
#include <math.h>
 enum type{
        Circle =1,
        Rectangle
    };
struct Shape{
    union dimensions{
        double l;
        double b;
        double radius;
    }m;
    enum type fig;

}s;

int main(){
    int x;
    double area,p,q;
    scanf("%d",&s.fig);

    switch(s.fig){
        case 1:
        scanf("%lf",&s.m.radius);

        area = 3.14*s.m.radius*s.m.radius;
        printf("Area of the circle: %0.4lf units",area);
        break;
        case 2:
        scanf("%lf",&s.m.l);
        p=s.m.l;
scanf("%lf",&s.m.b);
        q=s.m.b;

        area=(p)*(q);
        printf("Area of the rectangle: %0.4lf units",area);

        break;
        default:
        printf("Invalid choice!");
        break;


    }

}
