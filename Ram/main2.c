#include <stdio.h>
int main()
{
    enum  myEnum 
    {
        JUN,
        XYZ
    };    
    char* a[] = {[JUN] = "jun",[XYZ] = "xyz"};
    printf("%s\n",a[0]);
    printf("%s\n",a[1]);
}