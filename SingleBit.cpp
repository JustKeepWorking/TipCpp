/*
http://stackoverflow.com/questions/47981/how-do-you-set-clear-and-toggle-a-single-bit-in-c-c
*/

#include <iostream>
int main(int argc, char const *argv[])
{
	
	return 0;
}

void setBit(int &number, int x)
{
	number |= 1 << x;
}

void clearBit(int &number, int x)
{
	number &= ~(1 << x);
}

//XOR ^

void toggleBit(int &number, int x) 
{
	number ^= 1 << x;
}

bool checkBit(int &number, int x) 
{
	int bit = (number >> x) & 1;

	return bit == 1;
}
//Bit n will be set if x is 1, and cleared if x is 0.
void settingNthBit(int & number, int x, int n)
{
	number ^= (-x ^ number) & (1 << n);
}