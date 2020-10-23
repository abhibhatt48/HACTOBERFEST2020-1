#include<conio.h>
#include<stdio.h>

int main()
{
  float x,y;
  float fact(float);

  printf("\t\t\tprogram to calculate the factorial of a number");
  printf("\t\nenter your number here:");
  scanf("%f",&x);
  y=fact(x);
  printf("the factorial of %f is %f",x,y);

}
 float fact(float a)
 {
 float s;
 if(a==1)
  return(a);
 else
   s=a*fact(a-1);
   return(s);
 }




