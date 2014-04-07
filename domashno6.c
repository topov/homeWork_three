#include <stdio.h>
#include <stdlib.h>
int main ()
{
	float numOne , numTwo , counter , sum; 
	printf ("Number 1 and 2 : ");
	scanf_s ("%f %f", &numOne, &numTwo);
	sum=0;
	if (numTwo>numOne)
	{
	for (counter=numOne+1 ; counter<numTwo; counter+=0.01)
	{
		sum=(counter*counter)-4;
		printf("Result: %.2f \n",sum);
	}
	}
	
	else
	{
		for (counter=numTwo+1 ; counter<numOne; counter+=0.01)
	{
		sum=(counter*counter)-4;
		printf("Result: %.2f \n",sum);
	}
	}
	system ("pause");
	return 0;
}