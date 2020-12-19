#include <stdio.h>

int main()
{

	int num;
	int sum=0;
	
	do
	{
		
			
		printf ("Escribe un numero: ");
		scanf ("%d", &num);
		
		if (num%2!=0)
		{
			
			sum=num+sum;
			
		}
		
	}	
	while (num!=0);
	printf ("%d", sum);
   
}

