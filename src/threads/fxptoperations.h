#include <stdint.h>

const int f = 16384; //2^14

int intToFxpt(int n);
int fxptToInt_Zero(int x);
int fxptToInt_Nearest(int x);
int addIntFxpt(int x,int n);
int addFxptFxpt(int x,int y);
int subIntFxpt(int x,int n);
int subFxptFxpt(int x,int y);
int mulIntFxpt(int x,int n);
int mulFxptFxpt(int x,int y);
int divIntFxpt(int x,int n);
int divFxptFxpt(int x,int y);

int intToFxpt(int n)//conversion of an integer into a fixed point number
{
	return n*f;
}

int fxptToInt_Zero(int x)//conversion of a fixed point number into integer rounding to zero
{
	return x/f;
}

int fxptToInt_Nearest(int x)//conversion of a fixed point number into integer rounding to nearest
{
	if(x>=0)
		return (x+f/2)/f;
	else
		return (x-f/2)/f;
}

int addIntFxpt(int x,int n)//addition of an integer with a fixed point number
{
	return x+(n*f);
}

int addFxptFxpt(int x,int y)//addition of two fixed point numbers
{
	return x+y;
}

int subIntFxpt(int x,int n)//subtraction of an integer with a fixed point number
{
	return x-(n*f);
}

int subFxptFxpt(int x,int y)//subtraction of two fixed point numbers
{
	return x-y;
}

int mulIntFxpt(int x,int n)//mulitplication of an integer with a fixed point number
{
	return x*n;
}

int mulFxptFxpt(int x,int y)//multiplication of two fixed point numbers
{
	return ((int64_t)x)*y/f;
}

int divIntFxpt(int x,int n)//division of an integer with a fixed point number
{
	return x/n;
}

int divFxptFxpt(int x,int y)//division of two fixed point numbers
{
	return ((int64_t)x)*f/y;
}


