/*You are tasked with building a system to manage a library. Create a class "Book" in 
C++ that stores information about each book in the library. 
Attributes: 
• title: The title of the book. 
• author: The author of the book. 
• ISBN number: Unique ISBN number for the book. 
• Available copies: The number of available copies of the book. 
Methods: 
• Default Constructor: Initializes title and author as empty strings, and sets 
ISBN number and available copies to zero. 
• Parameterized Constructor: Sets title, author, ISBN number, and available 
copies to specified values. 
• Mutators and Accessors: 
o "set_title", "set_author", "set_isbn_number", 
"set_available_copies": Set the values for each attribute. 
o "get_title", "get_author", "get_isbn_number", 
"get_available_copies": Retrieve the current values of each attribute. 
• "borrow_one_book": Decreases available copies, indicating that a copy has 
been borrowed. 
• "return_one_book": Increases available copies, indicating that a copy has 
been returned. 
• "display_book_info": Displays all details of the book, including title, author, 
ISBN number, and available copies. 
• "validate_isbn": Private method that validates the format of ISBN number to 
be 13 character to ensure data integrity. This private method is used 
internally whenever a book is created or ISBN updated. 
Main Function Requirements: 
1. Initialize Book Objects: 
a. Create three Book objects for testing: 
i. 
Initialize the first book using the default constructor, then use 
mutator methods to set its title, author, ISBN number, and 
available copies to any valid values. 
ii. 
iii. 
Initialize the second book using the parameterized constructor, 
passing in values for title, author, ISBN number, and available 
copies. 
Initialize the third book with an invalid ISBN number to test 
the "validate_isbn" method. 
2. Simulate Borrowing and Returning: 
a. For the first book: Make two borrow operations, then one return. 
b. For the second book: Make one borrow operation, then two returns. 
3. Display Book Information: 
a. After each change call "display_book_info" to check that each book’s 
information updates correctly and reflects the expected behavior.
*/

//solution
#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    string isbn;
    int Avaliable_Copies;
    void validate_isbn(string ispnn) {
        if (ispnn.size() == 13) {
            cout << "ISBN is valid" << endl;
            isbn = ispnn;
        } else {
            cout << "ISBN is invalid, keeping default ISBN" << endl;
        }
    }
public:
    Book() {
        title=" ";
        author=" ";
        isbn="0000000000000";
        Avaliable_Copies=0;
    }
    Book(string x,string y,string ispn_,int w) {
        title=x;
        author=y;
        validate_isbn(ispn_);
        Avaliable_Copies=w;
    }
    void set_book_title(string bt) {
        title=bt;
    }
    void set_author(string author_) {
        author=author_;
    }
    void set_isbn(string ispn_) {
        validate_isbn(ispn_);
    }
    void set_copies(int cop) {
        Avaliable_Copies=cop;
    }
    string get_title() {
        return title;
    }
    string get_author() {
        return author;
    }
    string get_isbn() {
        return isbn;
    }
    int get_availiablecopies() {
        return Avaliable_Copies;
    }
    void borrow_one_book() {
        Avaliable_Copies--;
    }
    void return_one_book() {
        Avaliable_Copies++;
    }
    void display_book_info() {
        cout<<"BOOK NAME :"<<title<<endl;
        cout<<"BOOK AUTHOR :"<<author<<endl;
        cout<<"BOOK ISBN :"<<isbn<<endl;
        cout<<"BOOK AVALIABLE COPIES :"<<Avaliable_Copies<<endl;
    }
};

int main() {
    Book b1;
    b1.set_author("Moahamed");
    b1.set_book_title("Nature");
    b1.set_copies(3);
    b1.set_isbn("1870385620174");
    Book b2("Ahmed","CoFounder","1870385620174",10);
    Book b3("Malak","Pragrammity","1863186",3);
    b1.borrow_one_book();
    b1.borrow_one_book();
    b2.borrow_one_book();
    b2.return_one_book();
    b2.return_one_book();
    b1.display_book_info();
    b2.display_book_info();
}
