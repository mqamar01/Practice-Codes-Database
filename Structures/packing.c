#include <stdio.h>
#pragma pack(push,1)
int main()
{
    struct book
    {
        char alphabet;
        int size;
        int age;
    };
    #pragma pack(pop)
    struct book b;
    printf("Size of struct member: %ld",sizeof(b));
}