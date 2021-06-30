#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Variable definition.
Can take upto 10^101-1
Range can be changed by editing here.
*/
struct number
{
  char n[101];
};
typedef struct number Large;
//  Pre-made variable that will take the sum of two variables. Needs to be used with add()
Large sum;
/*
Converts String xxx/0/0/0... to ...000xxx
Passes the variable and the length of the string
Large conNum(Large* s, int l)
{
  Large temp;
  int i;
  for(i = 1; i <= l; i++)
  temp.n[100 - l + i] = s->n[i - 1];
  for(i = 0; i <= (100 - l); i++)
  temp.n[i] = '0';
  return temp;
}
*/
Large conNum(Large* , int);
/*
Adds two numbers. Works only with sum variable.
Passes the two variables and the maximum length between those variables
eg.
void add(Large* a, Large* b, int m)
{
  int i, digsum, carry = 0;
  for(i = 100; i >= (100 - m); i--)
  {
    digsum = (int)(a->n[i]) - '0' + (int)(b->n[i]) - '0' + carry;
    if(i != (100 - m))
    carry = 0;
    if(digsum > 9)
    {
      sum.n[i] = (char)((digsum % 10) + '0');
      carry = digsum / 10;
    }
    else
    sum.n[i] = (char)(digsum + '0');
  }
  for(i = 0; i < (100 - m); i++)
  sum.n[i] = '0';
  if(carry != 0)
  printf("Sum = %.*s\n", m + 1, sum.n + 100 - m);
  else
  printf("Sum = %.*s\n", m, sum.n + 100 - m + 1);
}
*/
void add(Large* , Large* , int );
