#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int numOne , numTwo , counter , sum; 
	printf ("Number 1 and 2 : ");
	scanf_s ("%d %d", &numOne, &numTwo);
	sum=0;
	if (numTwo>numOne)
	{
	for (counter=numOne+1 ; counter<numTwo; counter++)
	{
		sum +=counter;
	}
	}
	else
	{
		for (counter=numTwo+1 ; counter<numOne; counter++)
	{
		sum +=counter;
	}
	}
	printf ("The sum is: %d \n", sum);
	system ("pause");
	return 0;
}