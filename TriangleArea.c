#include <stdio.h>
#include <stdlib.h>

int main()
{int base, height;
 float area;
 printf("Base:");
 scanf("%d", &base);
 printf("\nHeight:");
 scanf("%d", &height);
 area = 0.5*base*height;
 printf("\nArea: %f", area);
 
 return 0;
}
