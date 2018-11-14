#include <stdio.h>

int func1(int);
int sub_func1(int);

int g_test;

int func1(int param1)
{
 int ret;

 ret = sub_func1(param1);
 if(ret > 0)
  return 1;
 else
  return 0;

}