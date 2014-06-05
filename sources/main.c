#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//include of usual_function.h
#include "..\headers\usual_functions.h"

typedef struct array{
	int length;
	int *value;
}array;

void new_random_array( array* my_array, int taille);
void read_array( array* my_array);
void clean_array(array* my_array);

void new_random_array( array* my_array, int taille)
{
	if (my_array!=NULL)
	{
		my_array->length = taille;
		int i;
		my_array->value = malloc(sizeof(int*)*my_array->length);
		for(i = 0; i< my_array->length; i++)
		{
			my_array->value[i] = (rand() % 100) + 1;
		}
	}
	else
	{
		exit(0);
	}
}

void read_array( array* my_array)
{
	int i;
	printf("\n");
	for(i = 0; i< my_array->length; i++)
	{
		printf(" %i |",my_array->value[i]);
	}
}
void clean_array(array* my_array)
{
	int i;
	free(my_array->value);
	free(my_array);
}

int main(int argc, char** argv)
{
	//On initialise la structure array
	int taille = 15;
	array* my_array = malloc(sizeof(array));
	new_random_array(my_array, taille);

	//ici on execute les tests
	//bubble_sort_int(my_array->value, my_array->length);
	quick_sort(my_array->value, 0, my_array->length);
	//lecture du tableau
	read_array(my_array);
	//On efface le tableau proprement
	clean_array(my_array);
	return 0;
}