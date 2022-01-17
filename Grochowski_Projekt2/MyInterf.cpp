#include "MyInterf.h"

void MyMenu() //Glowna funkcja main
{
	int ops;
	MY_STACK* stack = CreateStack();

	while (1)
	{
		ChooseFunction();
		cin >> ops;

		switch (ops)
		{
		case 0:			
			AddObject(stack);
			break;
		case 1:
			PrintAllObjects(stack);
			break;
		case 2:
			SaveToDisk(stack);
			break;
		case 3:
			stack = ReadFromDisk(stack);
			break;
		case 4:
			PrintPopStudent(stack);
			break;
		case 5:
			PrintClearStudent(stack);
			break;
		case 6:
			PrintTopStudent(stack);
			break;
		case 7:
			PrintStudentBySurname(stack);
			break;
		case 8:
			PrintIsEmpty(stack);
			break;
		case 9:
			MyExit(stack);
			break;
		default:
			UnknownOperation();
		};
	}
}

void AddObject(MY_STACK* stack) //Dodawanie studenta na stos
{
	Student* s = new Student[10];
	if (!s)
	{
		MemoryAllocationError();
		return;
	}

	StudentInput(s); //Wczytywanie wszystkich danych studenta
	stack->push(s); //Wywolanie funkcji dodajacej studenta na stos

}

void PrintIsEmpty(MY_STACK* stack) //Sprawdzanie, czy stos jest pusty
{
	if (stack->empty())
		StackIsEmpty();
	else
		StackIsNotEmpty();
}

void PrintAllObjects(MY_STACK* stack) //Wydrukowanie wszystkich studentow
{
	stack->print();
}

void PrintPopStudent(MY_STACK* stack) //Zabranie studenta, ktory jest na szczycie stosu
{
	Student* s = stack->pop(); //Wywolanie funkcji usuwajacej szczyt stosu

	if (s == NULL)
		StackPopFail(); //Jezeli stos jest pusty, to nie ma szczytu
	else
	{
		StackPop();
		StudentPrint(s);
	}
}

void PrintClearStudent(MY_STACK* stack) //Czyszczenie stosu
{
	stack->clear(); //Wywolanie funkcji czyszczacej stos
	StackClearSuccess();
}

void PrintTopStudent(MY_STACK* stack) //Wydrukowanie studenta, ktory jest na szczycie stosu
{
	Student* s = stack->top(); //Wywolanie funkcji top()

	if (s == NULL)
		StackTopFail(); //Jezeli stos jest pusty, to nie ma szczytu
	else
		StudentPrint(s);

}

void PrintStudentBySurname(MY_STACK* stack) //Przeszukiwanie stosu po nazwisku studenta
{
	TypeSurname();
	getchar();
	char* nazwisko = ReadStringDynamic(); //Czytanie dynamiczne z pliku binarnego

	Student* s = stack->search(nazwisko);
	if (s == NULL)
		TypeSurnameFail(); //Jezeli stos nie ma takiego nazwiska
	else
		StudentPrint(s);
}

void SaveToDisk(MY_STACK* stack) //Zapis do pliku ".bin"
{
	if (!SaveStack(stack))
		ErrorDuringWriteToFile();
}

MY_STACK* ReadFromDisk(MY_STACK* stack) //Odczyt z pliku ".bin"
{
	if (!ReadStack(stack))
		ErrorDuringReadToFile();
	return stack;
}

void MyExit(MY_STACK* stack) //Wyjscie z programu
{
	Quit();
	FreeStack(stack);
	system("pause");
	exit(1);
}

void MyInterfDealloc(void* ptr) //Zwalnianie pamieci
{
	if (ptr)
		free(ptr);
}