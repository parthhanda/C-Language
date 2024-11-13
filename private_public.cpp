#include<iostream>
using namespace std;

class avg
{
    private:
        int a,b,c;

    public:
        void getdata()
        {
            cout<<"Enter three numbers"<<endl;
            cin>>a>>b>>c;
        }

        void putdata()
        {

            cout<<"Average -> "<<(a+b+c)/3<<endl;
        }
};

int main()
{
    avg av;
    av.getdata();
    av.putdata();

    return 0;
}