#include<stdio.h>
#include<math.h>
double diaMeter(double radius);
double ciRcum(double radius);
double arEa(double radius);

int main()
{
	float dia,cir,ar,radius;
	printf("enter radius: ");
	scanf("%f",&radius);
	dia=diaMeter(radius);
	cir=ciRcum(radius);
	ar=arEa(radius);
	
	printf("diameter is: %.2f\n",dia);
	printf("circum is: %.2f\n",cir);
	printf("area is: %.2f\n",ar);
	
	return 0;
}

double diaMeter(double radius)
{
	return (2*radius);
}
double ciRcum(double radius)
{
	return (2*3.14*radius);
}
double arEa(double radius)
{
	return (3.14*radius*radius);
}
