#include <stdio.h>
#include <stdlib.h>
int main ()
{
int podadenoChislo , visochina , shirina,n,i; // visochina i dyljina na piramidata
	i=0;
	do
	{
	printf ("Enter a possitive number: ");
	scanf ("%d" , &podadenoChislo);
	}
	while (podadenoChislo<0);
		for (n=0;n<=podadenoChislo;n++) 
		{
			for (i=1;i<=n;i++)
			{
			printf ("%d ",n);
			
			}
			printf ("\n");
		}
	system ("pause");
	return 0;
}