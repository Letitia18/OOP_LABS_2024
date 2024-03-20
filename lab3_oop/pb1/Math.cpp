#include "Math.h"
#include <string.h>
#include <stdio.h>
#include <cstdarg>
int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y)
{
	return x + y;
}

int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...)
{
	int s = 0;
	va_list v;
	va_start(v, count);
	for (int i = 0; i < count; i++)
	{
		s += va_arg(v, int);
	}
	va_end(v);
	return s;
}