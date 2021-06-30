#include "large.h"
int max(int m, int n)
{
  if(m > n)
  return m;
  else
  return n;
}
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
int main()
{
  Large a, b;
  int l1, l2;
  printf("Enter first number: ");
  scanf("%11s", &a.n); l1 = strlen(a.n);
  printf("Enter second number: ");
  scanf("%11s", &b.n); l2 = strlen(b.n);
  a = conNum(&a, l1);
  b = conNum(&b, l2);
  printf("First no. = %.*s\n", l1, a.n + 100 - l1 + 1);
  printf("Second no. = %.*s\n", l2, b.n + 100 - l2 + 1);
  add(&a, &b, max(l1, l2));
  //printf("Sum = %.*s\n", max(l1, l2) + 1, sum.n + 100 - max(l1, l2));
  //printf("%.*s\n", l1, a.n + l1 - 1);
  //printf("%.11s\n", b.n);*/
  return 0;
}
