DSA-LAB-3

Task#1:
An abstract class Shape with a pure virtual function area(). Derive two classes, Circle and
Rectangle, from Shape. Implement the area() function for both derived classes.
Requirements:
• The Circle class should have a private attribute radius and a constructor to initialize it.
• The Rectangle class should have private attributes: length and width. The class
should have a constructor to initialize the attributes.
• Write a main function to create objects of both classes and display their areas.

Task#2:
An abstract class Employee with a pure virtual function calculateSalary(). Derive two
classes: FullTimeEmployee and PartTimeEmployee, from Employee.
Requirements:
• FullTimeEmployee should have a fixed salary, while PartTimeEmployee should be paid
based on hours worked and an hourly rate.
• Implement the calculateSalary() method in both classes.
• Write a main function that creates one full-time and one part-time employee, sets their details,
and prints their salaries.

Task#3:
This code implemented in Lab 1 for linear and binary search using templates.
Analyze the main function below and create appropriate classes using the concepts of pure virtual functions,
inheritance and abstract classes:
int main() {
// Create book objects
Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
Book book2("To Kill a Mockingbird", "Harper Lee", 324);
// Create newspaper objects
Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");
// Create a library object
Library library;
// Add books and newspapers to the library
library.addBook(book1);
library.addBook(book2);
library.addNewspaper(newspaper1);
library.addNewspaper(newspaper2);
// Display the entire collection
cout << "Before Sorting:\n";
library.displayCollection();
// Sort books by pages and newspapers by edition
library.sortBooksByPages();
library.sortNewspapersByEdition();
cout << "\nAfter Sorting:\n";
library.displayCollection();
// Search for a book by title
Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
if (foundBook) {
cout << "\nFound Book:\n";
foundBook->display();
} else {
cout << "\nBook not found.\n";
}
// Search for a newspaper by name
Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
if (foundNewspaper) {
cout << "\nFound Newspaper:\n";
foundNewspaper->display();
} else {
cout << "\nNewspaper not found.\n";
}
return 0;
}
