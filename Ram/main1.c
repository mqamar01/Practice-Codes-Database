#include <stdio.h>

#define VALUES \
    X(value1,1) \
    X(value2,2) \
    X(value3,3) \
    X(value4,4)


#define makeString(r) #r
int main ()
{
     #define X(v,x) char v; 
        VALUES
    #undef X

#define X(v,x)  v=x; 
        VALUES
    #undef X


    #define X(value,x) printf("%s = %d\n",value,x);
        VALUES
    #undef X

    //this is a comment
}