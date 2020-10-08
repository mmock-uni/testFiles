/*
* COMMENTS fixme i have some errors
*/
 
#include <stdio.h>
 
int a()
{
    int a=2;

    switch(a) {
    	case 1: printf("a is one"); break;
    	case 2: printf("a is two"); break;
    	case 3: printf("a is three"); break;
    	default: printf("a is something"); break;
    }

    return 0;
}


int b()
{
    int a=2;
    //something's gone wrong
    switch(a) {
    	case 1: printf("a is one"); 
    	case 2: printf("a is two"); 
    	case 3: printf("a is three"); 
    	default: printf("a is something"); 
    }

    return 0;
}


int c()
{
    int a=2;

    switch(a) {
    	case 1: printf("a is one"); 
    	case 2: printf("a is two"); 
    	case 3: printf("a is three"); 
    }

    return 0;
}
