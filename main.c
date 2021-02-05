#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*
    Description: Simple C code to convert
    hexadecimal to BCD (Binary Coded Decimal)
*/

static uint8_t Hex_To_BCD(uint8_t hex)
{
	uint8_t bcd = hex;
	uint8_t multipleOfTen = 0;
	while (bcd >= 10)
	{
	    bcd -= 10;
	    multipleOfTen++;
	}
	bcd = (multipleOfTen<<4) | bcd;
	return bcd;
}

int main()
{
    uint8_t hexadecimal = 0x28;
    uint8_t bcd = Hex_To_BCD(hexadecimal);

    printf("BCD = %x\n",bcd);
    return 0;
}
