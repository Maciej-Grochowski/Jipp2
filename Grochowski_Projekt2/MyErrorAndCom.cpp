#include <iostream>
#include "MyErrorAndCom.h"

using namespace std;

// WSZYSTKIE FUNKCJE WYPISUJACE (cout << ...) OBSLUGA BLEDOW I KOMUNIKATOW PODCZAS DZIALANIA PROGRAMU
void ChooseFunction()
{
	cout << "0 - Push, 1 - Print, 2 - Save, 3 - Read, 4 - Pop, 5 - Clear, 6 - Top, 7 - Search, 8 - CheckIfStackIsEmpty, 9 - Quit" << endl;
}

void UnknownOperation()
{
	cout << "Nie ma takiego numeru" << endl;
}

void MemoryAllocationError()
{
	cout << "memory allocation error" << endl;
}

void StackIsEmpty()
{
	cout << "Stos jest pusty" << endl;
}

void StackIsNotEmpty()
{
	cout << "Stos nie jest pusty" << endl;
}

void StackPopFail()
{
	cout << "Nie mozna zrobic pop bo stos byl pusty" << endl;
}

void StackPop()
{
	cout << "Zabrano ze stosu takiego studenta:" << endl;
}

void StackClearSuccess()
{
	cout << "Wyczyszczono stos" << endl;
}

void StackTopFail()
{
	cout << "Nie mozna zrobic top bo stos byl pusty" << endl;
}

void TypeSurname()
{
	cout << "Podaj nazwisko:" << endl;
}

void TypeSurnameFail()
{
	cout << "Nie ma takiego nazwiska studenta" << endl;
}

void ErrorDuringWriteToFile()
{
	cout << "IO error during write to file" << endl;
}

void ErrorDuringReadToFile()
{
	cout << "IO error during read to file" << endl;
}

void TypeSurnameYearSubject()
{
	cout << "Wprowadz nazwisko studenta, rok studenta i kierunek studenta:" << endl;
}

void SurnameType()
{
	cout << "Nazwisko: ";
}

void TypeYear()
{
	cout << "Rok: ";
}

void ChooseSubject()
{
	cout << "Kierunek (0 - INFORMATYKA, 1 - MATEMATYKA, 2 - FIZYKA, 3 - MECHANIKA)" << endl;
}

void TypeSubject()
{
	cout << "Kierunek: ";
}

void TypeSubjectFail()
{
	cout << "Nie wybrales zadnego numeru (0, 1, 2, 3) kierunku. Dlatego ten student nie bedzie mial przypisanego kierunku." << endl;
}

void InformatykaChoice()
{
	cout << "kierunek: Informatyka";
}

void MatematykaChoice()
{
	cout << "kierunek: Matematyka";
}

void FizykaChoice()
{
	cout << "kierunek: Fizyka";
}

void MechanikaChoice()
{
	cout << "kierunek: Mechanika";
}

void Quit()
{
	cout << "\nKoniec dzialania programu" << endl << endl;
}