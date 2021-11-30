#include <iostream>
#include "../include/Note.h"

using namespace std;

//Note
Note::Note() : title("puste") {}

string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}

//TextNote
TextNote::TextNote() : content("puste") {}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string content) {
    this->content = content;
}

//ListNote
ListNote::ListNote() : content("puste") {}

string ListNote::getContent() {
    return content;
}

void ListNote::setContent(string content) {
    this->content = content;
}

void NoteDirector::addNote(TextNote note){
    notesList.push_back(note);
}

void NoteDirector::deleteNote(TextNote note) {
    notesList.clear();
}

void NoteDirector::showNotesList() {
    for (int i = 0; i < notesList.size(); i++){
        cout << notesList[i].getContent() << endl;
    }
}