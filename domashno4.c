#include <stdio.h>
#include <stdlib.h>
int main()
{
 int numN , numK , counter, i,m;
 int box[10000];
 printf ("Enter N and K : ");
 scanf_s ("%d \t %d", &numN, &numK);
 for (i=0; i<numN; i++)
 {
  printf("Enter %d number: ", i+1);
  scanf("%d", &box[i]);
 }
 for (i=0; i<numN; i++)
 {
  if(box[i]>numK && box[i] % 3==0)
  {
   printf("%d\n",box[i]);
  }
  else ;
 }
 system("pause");
 return 0;
}