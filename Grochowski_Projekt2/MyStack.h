#pragma once

#include "MyStudent.h"

class MY_ELEM                           //klasa elementow stosu
{
public:
	Student* student;                   //wskaznik na klase student
	MY_ELEM* prev;                      //wskaznik na poprzedni element stosu
};

class MY_STACK                          //klasa stosu
{
public:
	MY_ELEM* top_elem;                  //wskaznik na szczyt stosu

	Student* pop();                     //funkcja czyszczaca szczyt stosu
	void clear();                       //funkcja czyszczaca stos
	bool empty();                       //funkcja sprawdzajaca, czy stos jest pusty
	Student* top();                     //fukcja zwracajaca studenta na szczycie stosu
	void push(Student* s);              //funkcja dodajaca studenta na stos

	Student* search(char* nazwisko);    //funkcja wyszukujaca studenta po nazwisku
	void print();                       //funkcja drukujaca stos
};

MY_STACK* CreateStack();                //funkcja tworzaca dynamiczny stos
void FreeStack(MY_STACK* stack);        //funkcja czyszczaca stos

bool SaveStack(MY_STACK* stack);        //funkcja zapisujaca stos
bool ReadStack(MY_STACK* stack);        //funkcja wczytujaca stos