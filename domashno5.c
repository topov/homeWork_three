#include <stdio.h> 
#include <stdlib.h>
int main ()
{
	int i,sum;
	int box[9999];
	sum=0;
	for (i=0; i>=0; i++)
 {
  printf("Enter %d number: ", i+1);
  scanf("%d", &box[i]);
  if (box[i]!=0)
  {
	  
	  sum += box[i];
  }
 else break;
 }
	printf("the of numbers is: %d ", sum);
	system ("pause");
}