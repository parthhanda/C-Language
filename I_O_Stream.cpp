// Concept of iput output stream using overloaded operator.

// Stream -> It is a way to handle data flow,for input or output.
// 1) Input Stream(istream) -> It is used to get data from the user just like cin.
// 2) Output Stream(ostream) -> It is used for sending data to a stream or a file just like cout.

// * In input-output operator is only used with friend class.

// Friend function - It is a special function that can access the private data of a class and it is useful for operator overloading.
// Member function - That belong to a class and can work with its data.

// getline - it is used to read an entire line of tax from an input stream snd it is useful for grtting user input with space.
// ignore - It is a function that skips our unwanted character in input buffer like new line.

// fstring - it support input-output operation on file.
// istring - it provide input operation on file.
// ostring - it provide output operation on file.

// eof(end of file) - It is used to see if there is no more data to read from a stream.
// clear - It allow for new input-output operations , it is a function that resets ant error.





// Question 1: Create a Movie Class
// Problem Statement: Create a Movie class that represents a movie with the following properties: title (string), director (string), and duration (float in minutes).

// Implement the default constructor to initialize the properties.
// Overload the << operator to display the movie details in the format: Title: [title], Director: [director], Duration: [duration] minutes.
// Overload the >> operator to input the movie details from the user.

#include <iostream>
#include <string>

using namespace std;

class movie {
private:
    string title;
    string director;
    float duration;

public:
    
    movie() : title(""), director(""), duration(0.0) {}


    friend ostream& operator<<(ostream& os, const movie& movie) {
        os << "Title: " << movie.title 
           << ", Director: " << movie.director 
           << ", Duration: " << movie.duration;
        return os;
    }

    
    friend istream& operator>>(istream& is, movie& movie) {
        cout << "Enter title: ";
        is.ignore(); 
        getline(is, movie.title);
        cout << "Enter director: ";
        getline(is, movie.director);
        cout << "Enter duration: ";
        is >> movie.duration;
        return is;
    }
};

int main() {
    movie movie;

  
    cin >> movie;

    
    cout << movie << endl;

    return 0;
}