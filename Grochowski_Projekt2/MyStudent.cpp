#include "MyStudent.h"
#include "MyErrorAndCom.h"

void StudentPutData(Student* ptr, char* title, Kierunek kierunek)
{
	strcpy_s(ptr->nazwisko, sizeof(ptr->nazwisko), title); //Wskaznik na nazwisko

	ptr->kierunek = kierunek; //Wskaznik na kierunek
}

char* ReadStringDynamic() //Dynamiczne czytanie z pliku
{
	char* nazwisko = new char[10];

	int i = 0;
	char c;

	while ((c = getchar()) != '\n')
	{
		nazwisko[i] = c;
		i++;
		char* nazwisko = new char[10];
	}

	nazwisko[i] = '\0';

	return nazwisko;
}

void StudentInput(Student* ptr) //Wczytywanie wszystkich danych studenta
{

	getchar();

	TypeSurnameYearSubject();
	SurnameType();
	ptr->nazwisko = ReadStringDynamic();  //Wskaznik na nazwisko

	TypeYear();
	cin >> ptr->rok; //Wskaznik na rok

	ChooseSubject();
	TypeSubject();

	int num;
	cin >> num; //Wczytanie typu ENUM

	switch (num)
	{
	case 0:
		ptr->kierunek = Kierunek::INFORMATYKA; //Wskaznik na typ ENUM - informatyka
		break;
	case 1:
		ptr->kierunek = Kierunek::MATEMATYKA; //Wskaznik na typ ENUM - matematyka
		break;
	case 2:
		ptr->kierunek = Kierunek::FIZYKA; //Wskaznik na typ ENUM - fizyka
		break;
	case 3:
		ptr->kierunek = Kierunek::MECHANIKA; //Wskaznik na typ ENUM - mechanika
		break;
	default:
		TypeSubjectFail();
	}
	

}

void StudentPrint(void* pdata) //Drukowanie wszystkich danych studenta
{
	Student* ptr = (Student*)pdata;

	cout << endl;

	cout << "nazwisko: " << ptr->nazwisko << endl;
	cout << "rok: " << ptr->rok << endl;

	switch (ptr->kierunek)
	{
	case Kierunek::INFORMATYKA: //Wypisanie na ekran, jesli zostal wybrany typ ENUM - informatyka
		InformatykaChoice();
		break;
	case Kierunek::MATEMATYKA: //Wypisanie na ekran, jesli zostal wybrany typ ENUM - matematyka
		MatematykaChoice();
		break;
	case Kierunek::FIZYKA: //Wypisanie na ekran, jesli zostal wybrany typ ENUM - fizyka
		FizykaChoice();
		break;
	case Kierunek::MECHANIKA: //Wypisanie na ekran, jesli zostal wybrany typ ENUM - mechanika
		MechanikaChoice();
		break;
	}
	cout << endl << endl;
}

void StudentFree(void** pTr) //Zwalnianie pamieci
{
	if (pTr)
	{
		if (*pTr)
		{
			Student* ptr = (Student*)(*pTr);
			free(*pTr);
			*pTr = NULL;
		}
	}
}

bool StudentSave(void** pdat, FILE* pf) //Sprawdzanie poprawnosci zapisu do pliku
{
	if (pf && *pdat)
	{
		Student* ptr = (Student*)(*pdat);
		size_t ctrl_len;

		int len = strlen(ptr->nazwisko);

		fwrite(ptr->nazwisko, 1, len, pf); //Wpisywanie do pliku binarnego nazwiska
		fputc('\0', pf);
		fwrite(&(ptr->rok), sizeof(int), 1, pf); //Wpisywanie do pliku binarnego roku
		fwrite(&(ptr->kierunek), sizeof(Kierunek), 1, pf); //Wpisywanie do pliku binarnego kierunku


		return true;
	}
	else
		return false;
}

bool StudentRead(void** pdat, FILE* pf) //Sprawdzanie poprawnosci odczytu z pliku
{
	if (pf)
	{
		Student* ptr = (Student*)(*pdat);
		size_t ctrl_len;

		if (!ptr)
		{
			if ((ptr = (Student*)malloc(sizeof(Student))) == NULL)
				return false;
		}

		*pdat = (void*)ptr;


		char* nazwisko = new char[10];

		int i = 0;
		char c;

		while ((c = fgetc(pf)) != '\0') //Odczytywanie z pliku binarnego nazwiska
		{
			if (c == EOF)
				return false;

			nazwisko[i] = c;
			i++;

			char* nazwisko = new char[10];
		}

		nazwisko[i] = '\0';
		ptr->nazwisko = nazwisko;

		fread(&(ptr->rok), sizeof(int), 1, pf); //Odczytywanie z pliku binarnego roku
		fread(&(ptr->kierunek), sizeof(int), 1, pf); //Odczytywanie z pliku binarnego kierunku

		return true;
	}
	else
		return false;
}