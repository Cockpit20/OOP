#include<stdio.h>

struct distance
{
    int km;
    int m;
};

void display_total_distance(struct distance d1, struct distance d2)
{
    int m=(d1.m+d2.m)%1000;
    int km=(d1.km+d2.km)+ ((d1.m+d2.m)/1000);
    printf("Total distance is %dkm and %dm.",km,m);
}

int main()
{
    struct distance d1,d2;
    printf("Enter distance 1 in km-meter: ");
    scanf("%d %d",&d1.km,&d1.m);

    printf("Enter distance 2 in km-meter: ");
    scanf("%d %d",&d2.km,&d2.m);

    display_total_distance(d1,d2);
}
