#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include "NumberList.h"
using namespace std;
int main()
{
	NumberList l;
	l.Init();
	l.Add(7);
	l.Add(3);
	l.Add(6);
	l.Add(1);
	l.Add(8);
	l.Add(9);
	l.Add(4);
	l.Add(2);
	l.Add(0);
	l.Sort();
	l.Print();
	system("pause");
	return 0;
}