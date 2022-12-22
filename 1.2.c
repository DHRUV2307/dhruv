#include<stdio.h>
#include<conio.h>

void main ()
{
    long int total_pop=80000,total_lit = 48 , men = 52 , lit_men =  35 , ill_men ,women, lit_women,ill_women;
 	printf("Total population\t:");
 	printf("%ld\n",total_pop);
    printf("Total number of literate:");
    total_lit=(total_pop*total_lit)/100;
    printf("%ld\n",total_lit);
    printf("Number of men\t\t:");
    men=(total_pop*men)/100;
    printf("%ld\n",men);
 	printf("Number of literate men\t:");
    lit_men=(total_pop*lit_men)/100;
    printf("%ld\n",lit_men);
    printf("Number of illiterate men:");
    ill_men=men-lit_men;
    printf("%ld\n",ill_men);
    printf("Number of women\t\t:");
    women=total_pop-men;
    printf("%ld\n",women);
    printf("Number of literate women:");
    lit_women=total_lit-lit_men;
    printf("%ld\n",lit_women);
    printf("Number of illiterate women:");
    ill_women=women-lit_women;
    printf("%ld\n",ill_women);
}

