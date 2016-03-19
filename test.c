#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float kvadyr (float a, float b, float c)
{	
  float d=0,x1=0,x2=0,x12,x;
  a*pow(x,2)+b*x+c==0;
  d=pow(b,2)-4*a*c;
  if (d==0)
  {
	x12=((-b)+(sqrt(d)))/2*a;
	printf (" %3.2f",x12); 
  }
  if (d<0)
  {
	printf ("Уравнение не имеет решений");
  }
  if (d>0)
  {
	x1=((-b)+(sqrt(d)))/2*a;
	x2=((-b)-(sqrt(d)))/2*a;
  }
  printf("\n x1=%3.2f x2=%3.2f, d=%3.2f",x1,x2,d);
}


int main()
{
	float a=3.6,b=-2.98,c=1;
	kvadyr (a,b,c);
	return 0;
}
