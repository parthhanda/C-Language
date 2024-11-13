//Design a C++ class named Vector3D that represents a 3-dimensional vector. The class should include:

//Private data members:

//double x (the x-coordinate of the vector)
//double y (the y-coordinate of the vector)
//double z (the z-coordinate of the vector)
//A parameterized constructor to initialize the vector with specific x, y, and z coordinates.

//A copy constructor to initialize a new Vector3D object as a copy of an existing Vector3D object.

//A method display that outputs the x, y, and z coordinates of the vector.

//Demonstrate the use of the copy constructor in the main function by creating a Vector3D object and then creating another Vector3D object as a copy of the first one.

#include <iostream>
using namespace std;

class vector3d
{
    private:
        double x;
        double y;
        double z;

    public:
        vector3d((double xcord,double ycord,double zcord) : x(xcord),y(ycord),z(zcord) ) {}

        vector3d(const vector3d &v) : x(v.x),y(v.y),z(v.z) {}

    void display() const
    {
        cout<<"X-> "<<x<<endl;
        cout<<"y-> "<<y<<endl;
        cout<<"Z-> "<<z<<endl;
    }
};   

int main()
{
    vector3d orignal(1.5,2.5,3.5);

    vector3d copy = orignal;

    cout<<"Orignal Vector"

}