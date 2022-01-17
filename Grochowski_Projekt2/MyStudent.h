#pragma once

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "windows.h"

using namespace std;

enum Kierunek                               //Tryb enum (do wyboru kierunku dla studenta)
{
	INFORMATYKA,                            //Wybor - informatyka
	MATEMATYKA,                             //Wybor - matematyka
	FIZYKA,                                 //Wybor - fizyka
	MECHANIKA                               //Wybor - mechanika
};

class Student                               //Klasa studenta
{
public:
	char *nazwisko;                         //Nazwisko studenta
	int rok;                                //Rok studenta
	Kierunek kierunek;                      //Kierunek studenta
};

char* ReadStringDynamic();                  //Dynamiczne czytanie z pliku

void StudentPrint(void* pdata);             //Drukowanie wszystkich danych studenta
void StudentInput(Student* ptr);            //Wczytywanie wszystkich danych studenta
void StudentFree(void** pTr);               //Zwalnianie pamieci

bool StudentSave(void** pdat, FILE* pf);    //Sprawdzanie poprawnosci zapisu do pliku
bool StudentRead(void** pdat, FILE* pf);    //Sprawdzanie poprawnosci odczytu z pliku