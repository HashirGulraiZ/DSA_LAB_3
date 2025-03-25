#include <iostream>
using namespace std;

class LibraryItem {
public:
    virtual void display() = 0;
};

class Book : public LibraryItem {
private:
    string title;
    string author;
    int pages;
public:
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    string getTitle() { return title; }
    int getPages() { return pages; }

    void display() override {
        cout << "Book: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

class Newspaper : public LibraryItem {
private:
    string name;
    string date;
    string edition;
public:
    Newspaper(string n, string d, string e) {
        name = n;
        date = d;
        edition = e;
    }

    string getName() { return name; }
    string getEdition() { return edition; }

    void display() override {
        cout << "Newspaper: " << name << ", Date: " << date << ", Edition: " << edition << endl;
    }
};

template <typename T>
T* linearSearch(T arr[], int size, string key, string(T::* getKey)()) {
    for (int i = 0; i < size; i++) {
        if ((arr[i].*getKey)() == key) {
            return &arr[i];
        }
    }
    return nullptr;
}

template <typename T, typename U>
void bubbleSort(T arr[], int size, U(T::* getKey)()) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((arr[j].*getKey)() > (arr[j + 1].*getKey)()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

class Library {
private:
    Book books[10];
    Newspaper newspapers[10];
    int bookCount, newspaperCount;
public:
    Library() {
        bookCount = 0;
        newspaperCount = 0;
    }

    void addBook(Book b) {
        if (bookCount < 10) books[bookCount++] = b;
    }

    void addNewspaper(Newspaper n) {
        if (newspaperCount < 10) newspapers[newspaperCount++] = n;
    }

    void displayCollection() {
        cout << "Books:\n";
        for (int i = 0; i < bookCount; i++) books[i].display();

        cout << "\nNewspapers:\n";
        for (int i = 0; i < newspaperCount; i++) newspapers[i].display();
    }

    void sortBooksByPages() {
        bubbleSort(books, bookCount, &Book::getPages);
    }

    void sortNewspapersByEdition() {
        bubbleSort(newspapers, newspaperCount, &Newspaper::getEdition);
    }

    Book* searchBookByTitle(string title) {
        return linearSearch(books, bookCount, title, &Book::getTitle);
    }

    Newspaper* searchNewspaperByName(string name) {
        return linearSearch(newspapers, newspaperCount, name, &Newspaper::getName);
    }
};
