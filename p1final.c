
#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2, float *y2)
{
  printf("enter the corinates for point 1\n");
  scanf("%f\n%f",x1,x2);
  printf("enter the cordinates for point 2\n");
  scanf("%f\n%f",y1,y2);
}
void find_didtance(float x1,float x2,float y1,float y2,float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1,float x2,float y1,float y2,float area)
{
  printf("the didtance between(%f,%f) and (%f,%f) is %f",x1,x2,y1,y2,area);
}
float main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_didtance(x1,x2,y1,y2,&area);
  output(x1,x2,y1,y2,area);
    return 0;
}
