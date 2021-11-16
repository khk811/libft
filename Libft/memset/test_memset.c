#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	int	*numPtr;

	numPtr = malloc(sizeof(int));
	memset(numPtr, 7, 4);
	printf("%d\n", *numPtr);
	free(numPtr);
	return (0);
}
