#include <stdio.h>

int main()
{
  int d, a, r;

  printf("ievadi decimalo skaitli\n");
  scanf("%d", &d);

  for (a = 8; a >= 0; a--)
  {
    r = d >> a;

    if (r & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
