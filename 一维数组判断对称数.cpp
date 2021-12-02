#include <stdio.h>
main()
{	   	  	   	 	 
    int i, j, a[8];

    for (i = 0; i < 8; i++)
        scanf("%d", &a[i]);

    for (i = 0, j = 7; i <= j; i++, j--)
        if (a[i] != a[j])  break;

    if (i < j)  printf("no,it is not\n");
    else  printf("yes,it is\n");
}	   	  	   	
