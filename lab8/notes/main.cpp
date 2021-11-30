#include <iostream>
#include "include/Note.h"

using namespace std;

int main() {
    //notatka 1
    TextNote text_note;

    text_note.setTitle("notatka tekstowa");
    cout << text_note.getTitle() << endl;

    string line;
    getline(cin, line);

    cout << "notatka: ";
    text_note.setContent(line);
    cout << text_note.getContent() << endl;

    //notatka 2
    TextNote text_note2;

    text_note2.setTitle("notatka tekstowa 2");
    cout << text_note2.getTitle() << endl;

    string line2;
    getline(cin, line2);

    cout << "notatka: ";
    text_note.setContent(line2);
    cout << text_note2.getContent() << endl;


    NoteDirector noteDirector;
    noteDirector.addNote(text_note);

    cout << "lista notatek: ";
    noteDirector.showNotesList();
    return 0;
}