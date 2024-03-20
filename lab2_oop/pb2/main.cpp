#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include "ProprietatiElev.h"
using namespace std;
int main()
{
	ProprietatiElev e1;
	ProprietatiElev e2;
	e1.setNume((char*)"Elev1");
	e1.setNotaMatematica(7);
	e1.setNotaEngleza(10);
	e1.setNotaIstorie(9);
	e2.setNume((char*)"Elev2");
	e2.setNotaMatematica(5);
	e2.setNotaEngleza(7);
	e2.setNotaIstorie(8);
	system("pause");
	return 0;
}