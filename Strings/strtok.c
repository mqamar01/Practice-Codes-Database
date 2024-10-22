#include <stdio.h>
#include <string.h>
int main()
{
	char name[] = "Murtaza Qamar";
	char* token = strtok(name, "a");
	while (token != NULL) 
    {
		printf("%s\t", token);
		token = strtok(NULL, "a");
	}
	return 0;
}
