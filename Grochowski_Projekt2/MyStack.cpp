#include "MyStack.h"

#pragma warning (disable : 4996)

const char MyFileName[] = "../PlikDoProjektu2.bin"; //Plik binarny (baza danych stosu)

MY_STACK* CreateStack() //funkcja tworzaca dynamiczny stos
{
	MY_STACK* stack = new MY_STACK[10];
	stack->top_elem = NULL; //ustawienie szczytu stosu na NULL
	return stack;
}

void FreeStack(MY_STACK* stack) //funkcja czyszczaca stos
{
	stack->clear(); //wskaznik na funkcje clear()
	free(stack); //czyszczenie stosu
	stack = NULL; //ustawienie stosu na NULL
}

bool SaveStack(MY_STACK* stack) //funkcja zapisujaca stos
{
	FILE* pf = fopen(MyFileName, "wb"); //otwieranie pliku binarnego w trybie pisania przed zapisem
	if (!pf)
		return false;


	for (MY_ELEM* temp = stack->top_elem; temp != NULL; temp = temp->prev)
		StudentSave((void**)&(temp->student),pf); //zapis do pliku binarnego

	fclose(pf); //zamykanie pliku binarnego po zapisie
	return true;
}

bool ReadStack(MY_STACK* stack) //funkcja wczytujaca stos
{	
	FILE* pf = fopen(MyFileName, "rb");
	if (!pf)
		return false;
	
	stack->clear();
	MY_STACK* stack_helper = CreateStack();

	char c;
	while((c = fgetc(pf)) != EOF) //odczytywanie zapisanego studenta z pliku binarnego
	{
		ungetc(c, pf);
		Student* s = new Student[10];
		bool success = StudentRead((void**)&s, pf);

		if (!success)
			return false;

		stack_helper->push(s);	
	}

	while (!stack_helper->empty()) //wczytywanie kazdego studenta osobno dopoki stos nie bedzie pusty
		stack->push( stack_helper->pop() );

	FreeStack(stack_helper);

	fclose(pf); //zamkniecie pliku binarnego po odczycie
	return true;
}

Student* MY_STACK::pop() //funkcja czyszczaca szczyt stosu
{
	if (empty())
		return NULL;

	Student* res = top();

	if (top_elem->prev == NULL)
	{
		free(top_elem);
		top_elem = NULL;
	}

	else 
	{
		MY_ELEM* e = top_elem;      //za kazdym popowaniem szczyt stosu ustawia sie
		top_elem = top_elem->prev;  //na element ktory byl wczesniej zaraz przed szczytem
		free(e);
		e = NULL;
	}

	return res;
}

void MY_STACK::clear() //funkcja czyszczaca stos
{
	while (!empty()) { //dopoki stos nie jest pusty, to wywoluje sie funkcja pop()
		pop();
	}
}

bool MY_STACK::empty() //funkcja sprawdzajaca, czy stos jest pusty
{
	return top_elem == NULL; //zwraca TRUE jesli stos jest pusty; FALSE, jesli nie jest pusty
}

Student* MY_STACK::top() //fukcja zwracajaca studenta na szczycie stosu
{
	if (empty()) //jezeli stos pusty, to nie zwraca elementu TOP
		return NULL;
	else
		return top_elem->student; //jezeli stos nie jest pusty, to zwraca element TOP
}

void MY_STACK::push(Student* s) //funkcja dodajaca studenta na stos
{
	MY_ELEM* e = new MY_ELEM[10];

	e->student = s;
	e->prev = top_elem;

	top_elem = e; //ustawia szczyt stosu na element, ktory zostal dodany
}

Student* MY_STACK::search(char* nazwisko) //funkcja wyszukujaca studenta po nazwisku
{
	if (empty()) //jezeli stos jest pusty, to nie sprawdzaj
		return NULL;

	for (MY_ELEM* temp = top_elem; temp != NULL; temp = temp->prev) //dla kazdego elementu sprawdz, czy istnieje takie nazwisko
	{
		if (strcmp(temp->student->nazwisko,nazwisko) == 0)
			return temp->student;
	}

	return NULL;
}

void MY_STACK::print() //funkcja drukujaca stos
{
	if (empty())
		return;

	for (MY_ELEM* temp = top_elem; temp != NULL; temp = temp->prev) //dla kazdego elementu stosu wywolaj funkcje drukujaca
	{
		StudentPrint(temp->student);
	}

}