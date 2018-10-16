#include"func1.h"
#include"func2.h"
#include<stdio.h>

void turbo_on()
{
  printf("turbo on! \n");

}

void turbo_off()
{
  printf("turbo off! \n");

}



int main(void)
{
  func1();
  func2();
  return 0;
}
