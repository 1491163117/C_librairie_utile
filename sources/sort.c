#include "..\headers\usual_functions.h"
/*
a coder :

bubble_sort
heap_sort
merge_sort
quicksort

*/
//Get the size from a tab
void swap_int_tab(int* tab, int i, int j)
{
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

void bubble_sort_int(int* tab, int taille_tab)
{
	int i;
    int taille = taille_tab;
    int tab_en_ordre = 0;
    while(!tab_en_ordre)
    {
        tab_en_ordre = 1;
        for( i=0 ; i < taille-1 ; i++)
        {
            if(tab[i] > tab[i+1])
            {
                swap_int_tab(tab,i,i+1);
                tab_en_ordre = 0;
            }
        }
        taille--;
    }
}