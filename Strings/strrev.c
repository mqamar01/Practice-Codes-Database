#include <stdio.h>
#include <string.h>
void str_rev(char *str)
{
	int i = 0;
	int j = strlen(str) - 1;
	while (i < j) 
    {
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}
int main()
{
    char name[] = "Murtaza Qamar";
    str_rev(name);
    printf("%s",name);
}