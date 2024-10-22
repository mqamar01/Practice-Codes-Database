#include <stdio.h>
int convertEndian(__uint16_t *buf, int n, int type)
{
    if (n == 1 || n == 2 || n == 4 || n == 8 || n == 16)
    {
        __uint16_t temp1 = 0xFF00 & (*buf);
        __uint16_t temp2 = 0x00FF & (*buf);    
        if (type == 0)
        {
            
            __uint16_t final = (temp1>>8) | (temp2<<8);
            return final;
        }
        else 
        {
            __uint16_t final = (temp1) | (temp2);
            return final;
        }
    }
    else 
    {
        return 0;
    }
}
int main()
{
    __uint16_t num = 0x4F52;
    __uint16_t ans = convertEndian(&num,2,1);
    __uint8_t lsb = (__uint8_t)ans;
    __uint8_t msb = ans>>8;
    if (ans != 0)
    {
        printf("\nData:        %x        %x\nAdrress:    %ls      %ls\n\n",msb,lsb);
    }
    else 
    {
        printf("Invalid number of bytes\n");
    }
}