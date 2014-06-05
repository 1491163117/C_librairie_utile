#include "..\headers\usual_functions.h"
/*
a coder :

bubble_sort
heap_sort
merge_sort
quicksort

*/
//SWAP two entries
void swap_int_tab(int* tab, int i, int j)
{
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}


/* -_-_-_-_-_-_- Bubble_sort -_-_-_-_-_-_-*/
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
/* -_-_-_-_-_-_- END Bubble_sort -_-_-_-_-_-_-*/



/* -_-_-_-_-_-_- quick_sort -_-_-_-_-_-_-*/
void quick_sort( int* tab, int start, int end)
{
   int j;

   if( start < end ) 
   {
    // diviser pour mieux règner !
        j = partition( tab, start, end);
        quick_sort( tab, start, j-1);
        quick_sort( tab, j+1, end);
   }
    
}

int partition( int* tab, int start, int end)
{
   int pivot, i, j, t;
   pivot = tab[start];
   i = start; j = end+1;
        
   while( 1)
   {
        do ++i;
        while( tab[i] <= pivot && i <= end );

        do --j; 
        while( tab[j] > pivot );
    
        if( i >= j ) break;
        t = tab[i]; tab[i] = tab[j]; tab[j] = t;
   }
   t = tab[start]; tab[start] = tab[j]; tab[j] = t;
   return j;
}
/* -_-_-_-_-_-_- END quick_sort -_-_-_-_-_-_-*/