#include <stdio.h>
#include <conio.h>

main()
{
	int  i = 2;
	float f = 13.5, result;
	//TODO: print out the f/i quotient
	//QUESTION: do you need explicit conversion?
    result = (f / (float) i);
    printf("The result is %.2f.\n", result);

	return 0;
}
