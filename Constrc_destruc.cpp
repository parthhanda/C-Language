#include <iostream>
using namespace std;

class book
{
public:
    book(string t, string a, int year) : title(t), author(a), publicationyear(year)
    {
        cout << "Book Added: " << title << " by " << author << ", published in " << publicationyear << endl;
    }

    ~book()
    {
        cout << "Book Removed: " << title << endl;
    }

private:
    string title;
    string author;
    int publicationyear;
};

int main()
{
    book book1("Maths", "Rd Sharma", 1949);
    book book2("PHy", "Hc Verma", 1960);

    return 0;
}
