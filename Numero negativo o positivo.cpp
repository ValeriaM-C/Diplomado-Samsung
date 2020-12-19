#include <stdio.h>

int main()
{

	int num;
	
	printf ("Escribe un numero: ");
	scanf ("%d", &num);
	
	if (num>0)
	{
		
		printf("Es un numero positivo");
		
	}
	else
	{
		
		printf ("Es un numero negativo");
		
	}
	
	return 0;
   
}

