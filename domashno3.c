#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int numOne , numTwo , counter , sum, possitive, negative, number,sumOne; 
	sum=1;
	printf ("Number 1 and 2 : ");
	scanf_s ("%d \t %d", &numOne, &numTwo);
	sum=1;
	sumOne=0;
	for (counter=numOne ; counter<=numTwo; counter++)
	{
		if (counter%2==0) 
		{
			sumOne+=counter ; 
		}
		else
		{
			sum *=counter;
		}
	}
	printf ("The sum of possitive is : %d \n", sumOne);
	printf("Negative is: %d \n",sum); 
	system ("pause");
	return 0;
}




