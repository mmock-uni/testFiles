#include <stdio.h>

int a()
{
    int a=2;

    switch(a) {
    	case 1: printf("a is one\n"); break;
    	case 2: printf("a is two\n"); break;
    	case 3: printf("a is three\n"); break;
    	default: printf("a is something\n"); break;
    }

    return 0;
}


int b()
{
    int a=2;

    switch(a) {
    	case 1: printf("a is one\n"); 
    	case 2: printf("a is two\n"); 
    	case 3: printf("a is three\n"); 
    	default: printf("a is something\n"); 
    }

    return 0;
}


int c()
{
    int a=2;

    switch(a) {
    	case 1: printf("a is one\n"); 
    	case 2: printf("a is two\n"); 
    	case 3: printf("a is three\n"); 
    }

    return 0;
}
