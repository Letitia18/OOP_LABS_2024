#include "ProprietatiElev.h"
#include<string.h>
void ProprietatiElev::setNume(char nume[20])
{
	this->nume = nume;
}
char* ProprietatiElev::getNume()
{
	return this->nume;
}
void ProprietatiElev::setNotaMatematica(int NotaMatematica)
{
	this->NotaMatematica = NotaMatematica;
}
int ProprietatiElev::getNotaMatematica()
{
	return this->NotaMatematica;
}
void ProprietatiElev::setNotaEngleza(int NotaEngleza)
{
	this->NotaEngleza = NotaEngleza;
}
int ProprietatiElev::getNotaEngleza()
{
	return this->NotaEngleza;
}
void ProprietatiElev::setNotaIstorie(int NotaIstorie)
{
	this->NotaIstorie = NotaIstorie;
}
int ProprietatiElev::getNotaIstorie()
{
	return this->NotaIstorie;
}
float ProprietatiElev::getNotaMedie()
{
	return ((NotaMatematica + NotaEngleza + NotaIstorie) / 3.0);
}
int ProprietatiElev::compareNume(char ProprietatiElev& e1, char ProprietatiElev& e2);
{
	return strcmp(e1.nume, e2.nume);
}
int ProprietatiElev::compareNotaMatematica(char ProprietatiElev& e1, char ProprietatiElev& e2)
{
	if (e1.NotaMatematica() == e2.NotaMatematica())
		return 0;
	if (e1.NotaMatematica() > e2.NotaMatematica())
		return 1;
	if (e1.NotaMatematica() < e2.NotaMatematica())
		return -1;
}
int ProprietatiElev::compareNotaEngleza(char ProprietatiElev& e1, char ProprietatiElev& e2)
{
	if (e1.NotaEngleza() == e2.NotaEngleza())
		return 0;
	if (e1.NotaEngleza() > e2.NotaEngleza())
		return 1;
	if (e1.NotaEngleza() < e2.NotaEngleza())
		return -1;
}
int ProprietatiElev::compareNotaIstorie(char ProprietatiElev& e1, char ProprietatiElev& e2)
{
	if (e1.NotaIstorie() == e2.NotaIstorie())
		return 0;
	if (e1.NotaIstorie() > e2.NotaIstorie())
		return 1;
	if (e1.NotaIstorie() < e2.NotaIstorie())
		return -1;
}
int ProprietatiElev::compareNotaMedie(char ProprietatiElev& e1, char ProprietatiElev& e2)
{
	if (e1.NotaMedie() == e2.NotaMedie())
		return 0;
	if (e1.NotaMedie() > e2.NotaMedie())
		return 1;
	if (e1.NotaMedie() < e2.NotaMedie())
		return -1;
}