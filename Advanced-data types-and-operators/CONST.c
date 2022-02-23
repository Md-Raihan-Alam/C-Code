#include<stdio.h>
void main()
{
/// This is how const is used
  const int SIDE = 10;///same as int const SIDE=10;
  int area;
  area = SIDE*SIDE;
  printf("The area of the square with side: %d is: %d sq. units"
  , SIDE, area);
}
