#include <iostream>
#include <string>
using namespace std;
class computer{
public:
	string brand;
	string processor;
	int ram_size;
	computer(string b,string p,int ra) : brand(b),processor(p),ram_size(ra){}
	void specifications1(){
		cout<<"Brand -> "<<brand<<" | Processor -> "<<processor<<" | Ram size -> "<<ram_size<<endl;
	}
};
class laptop : public computer{
public:
	int battery;
	laptop(string b,string p,int ra,int ba) : computer(b,p,ra) , battery(ba) {}
	void specifications2(){
		cout<<"Battery -> "<<battery<<"%"<<endl;
	}
};
class desktop : public computer{
public:
	bool multimedia;
	desktop(string b,string p,int ra,bool mm) : computer(b,p,ra) , multimedia(mm) {}
	void specifications3(){
		if(multimedia){
			cout<<"Supports multi media play"<<endl;
		}
		else{
			cout<<"Does not supports multi media play"<<endl;
		}
	}
};
int main(){
	laptop mylaptop("ASUS","INTEL",512,90);
	mylaptop.specifications1();
	mylaptop.specifications2();
	
	desktop mydesktop("HP","AMD",256,true);
	mydesktop.specifications1();
	mydesktop.specifications3();
}