#include <stdio.h>
#include "main.h"
#include "other.h"
#include "version.h"

int main()
{
	printf("hey %s:%i\n", TEST, foo(3));
	printf("\nversion %i.%i-%s\n", VER_MAJOR, VER_MINOR, VER_COMPILATION_TYPE);
}
