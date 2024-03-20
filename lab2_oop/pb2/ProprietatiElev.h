#pragma once
class ProprietatiElev
{
	char nume[20];
	int NotaMatematica;
	int NotaEngleza;
	int NotaIstorie;
public:
	void setNume(char* nume);
	char* getNume();

	void setNotaMatematica(int NotaMatematica);
	int getNotaMatematica();

	void setNotaEngleza(int NotaEngleza);
	int getNotaEngleza();

	void setNotaIstorie(int NotaIstorie);
	int getNotaIstorie();

	float getNotaMedie();

	int compareNume(char* s1, char* s2);

	int compareNotaMatematica(char* e1, char* e2);

	int compareNotaEngleza(char* e1, char* e2);

	int compareNotaIstorie(char* e1, char* e2);

	int compareNotaMedie(char* e1, char* e2);
};

