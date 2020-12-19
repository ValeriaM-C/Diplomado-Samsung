#include <stdio.h>
#include <stdlib.h>

//Busqueda lineal

int main()
{

	int i=0, CAPACIDAD=10, tamArreglo=4, valor_buscado;
	int arreglo [CAPACIDAD]={2, 4, 6, 8};
	
	printf ("Ingresa un numero: ");
	scanf ("%d", &valor_buscado);
	
	for (i=0; i<tamArreglo; i++)
	{
		
		if (arreglo [i]==valor_buscado)
		{
			
			printf ("\nSe encontro el elemento en la posicion %d del arreglo", i);
			return 0;
			
		}
		
	}
	
	printf ("\nNo se encontro el elemento en el arreglo");
	return 0;
   
}

//Remover elemento de un arreglo desordenado

int main()
{
	
	int CAPACIDAD=10, i=0, tamArreglo=7, indiceEliminar=3;
	int arreglo[CAPACIDAD]= {8, 5, 2, 6, 1, 7, 9};
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
	printf("\n");
	arreglo[indiceEliminar]=arreglo[tamArreglo-1];
	tamArreglo-=1;
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
	return 0;

}

//Remover elemento de un arreglo ordenado

main()
{
	
	int CAPACIDAD=10, i=0, tamArreglo=7, indiceEliminar=3;
	int arreglo[CAPACIDAD]= {1, 2, 3, 4, 5, 6, 7};
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
	printf ("\n");
	for (i=indiceEliminar; i<tamArreglo; i++)
	{
		
		arreglo [i]=arreglo[i+1];
		
	}
	
	tamArreglo-=1;
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
}

//Insertar elemento en arreglo desordenado

main()
{
	
	int capacidad=10, i=0, tamArreglo=7, elementoInsertar=13;
	int arreglo[capacidad]= {8, 5, 2, 6, 1, 7, 9};
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
	printf("\n");
	arreglo[tamArreglo]=elementoInsertar;
	tamArreglo=tamArreglo+1;
	
	for (i=0; i<tamArreglo; i++)
	{
		
		printf ("%i", arreglo [i]);
		
	}
	
}

//Insertar un elemento en un arreglo organizado

#define capacidad 10

main()
{
	int Arreglo[capacidad] = {1,2,3,4,5,6,7,};
    int tamArreglo=7, i, elemento;
	int indice=tamArreglo;
	
	for(i=0;i<tamArreglo;i++)
	{
		
    printf("%i",Arreglo[i]);
        
	}
    
	printf("\nIngrese el elemento a insertar: ");
    scanf("%d", &elemento);
	
	for(i=0;i<tamArreglo;i++)
	{
		
		if(elemento<Arreglo[i])
		{
			
			indice=i;
			break;
			
		}
						
	}	

	if(indice!= tamArreglo)
	{
		
		for(i=tamArreglo;i>=indice;i--)
		{
			
		Arreglo[i]=Arreglo[i-1];
		
		}
		
	}

	Arreglo[indice]=elemento;
	tamArreglo=tamArreglo+1;
		
	for(i=0;i<tamArreglo;i++)
	{
			
		printf("%i",Arreglo[i]);
        
	}
		
	return 0;
    
}
