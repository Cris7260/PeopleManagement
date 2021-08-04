#include <iostream>
#include <cstring>

using namespace std;

class CPerson
{
public:
	CPerson();
	CPerson(const char* inputName);
	CPerson(const char* inputName,const char* inputAddress);
	CPerson(const CPerson&);
	~CPerson();
	void SetName(const char*);
	void SetAddress(const char*);
	void disp();
	CPerson& operator=(const CPerson&);
protected:
	char* name;
	char* address;
};
