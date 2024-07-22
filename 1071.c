#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int x, y, auxi = 0, aux;
  scanf ("%d %d", &x, &y);
  if (y < x)
	{
	  aux = x;
	  x = y;
	  y = aux;
	}
  int diff = x - y;
  for (int i = 1; i < abs (diff); i += 2)
	{
	  if (x % 2 == 0)
		{
		  x++;
		}
	  else
		{
		  x += 2;
		}
	  auxi += x;

	}
  printf ("%d\n", auxi);
  return 0;
}
