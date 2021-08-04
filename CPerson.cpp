#include <iostream>
#include <cstring>

using namespace std;

CPerson::CPerson()
{
	name=new char[30];
	address=new char[100];
}

CPerson::CPerson(const char* inputName)
{
	name=new char[30];
	strcpy(name,inputName);
	address=new char[100];
}

CPerson::CPerson(const char* inputName,const char* inputAddress)
{
	name=new char[30];
        strcpy(name,inputName);
        address=new char[100];
        strcpy(address,inputAddress);

}

CPerson::CPerson(const CPerson& inputCPerson)
{
	name=new char[30];
	strcpy(name,inputCPerson.name);
	address=new char[100];
	strcpy(address,inputCPerson.address);
}

CPerson::~CPerson()
{
	delete [] name;
	delete [] address;
}

void CPerson::SetName(const char* inputName)
{
	strcpy(name,inputName);
}

void CPerson::SetAddress(const char* inputAddress)
{
	strcpy(address,inputAddress);
}

void CPerson::disp()
{
	cout<<"Name:"<<name<<endl;
	cout<<"Address:"<<address<<endl;
}

CPerson& CPerson::operator=(const CPerson& inputCPerson)
{
	if(this==&inputCPerson) return *this;
	strcpy(name,inputCPerson.name);
	strcpy(address,inputCPerson.address);
	return *this;
}
