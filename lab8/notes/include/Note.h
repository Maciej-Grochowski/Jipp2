
#ifndef LAB8_NOTE_H
#define LAB8_NOTE_H

#include <vector>
using namespace std;

class Note{
protected:
    string title;
public:
    Note();

    string getTitle();
    void setTitle(string title);

    virtual string getContent() = 0;
    virtual void setContent(string content) = 0;
};

class TextNote : public Note {
protected:
    string content;
public:
    TextNote();

    string getContent();
    void setContent(string content);
};

class ListNote : public Note {
protected:
    string content;
public:
    ListNote();

    string getContent();
    void setContent(string content);
};

class NoteDirector : public TextNote, ListNote{
protected:
    vector<TextNote> notesList;
public:
    void addNote(TextNote note);
    void showNotesList();

    void deleteNote(TextNote note);
    void editNote(TextNote note);

};

#endif //LAB8_NOTE_H
