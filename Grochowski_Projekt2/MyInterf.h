#pragma once

#include "MyErrorAndCom.h"
#include "MyStack.h"

void MyMenu();                                  //Glowna funkcja main

void AddObject(MY_STACK* stack);                //Dodawanie studenta na stos
void PrintIsEmpty(MY_STACK* stack);             //Sprawdzanie, czy stos jest pusty
void PrintPopStudent(MY_STACK* stack);          //Zabranie studenta, ktory jest na szczycie stosu
void PrintClearStudent(MY_STACK* stack);        //Czyszczenie stosu
void PrintTopStudent(MY_STACK* stack);          //Wydrukowanie studenta, ktory jest na szczycie stosu
void PrintStudentBySurname(MY_STACK* stack);    //Przeszukiwanie stosu po nazwisku studenta
void PrintAllObjects(MY_STACK* stack);          //Wydrukowanie wszystkich studentow
void MyExit(MY_STACK* stack);                   //Wyjscie z programu
void MyInterfDealloc(void* ptr);                //Zwalnianie pamieci

void SaveToDisk(MY_STACK* stack);               //Zapis do pliku ".bin"
MY_STACK* ReadFromDisk(MY_STACK* stack);        //Odczyt z pliku ".bin"