#include <iostream>
#include <cstring>
#include <vector>

#include "CPerson.h"
#include "CPerson.cpp"

using namespace std;

int main()
{
	vector<CPerson> personList;

	CPerson* objCPerson1=new CPerson;
	objCPerson1->SetName("A");
	objCPerson1->SetAddress("Place1");
	objCPerson1->disp();
	personList.push_back(*objCPerson1);

	cout<<endl;
	CPerson* objCPerson2=new CPerson("B");
	objCPerson2->disp();
        personList.push_back(*objCPerson2);


	cout<<endl;
	CPerson* objCPerson3=new CPerson("C","Place3");
        objCPerson3->disp();
        personList.push_back(*objCPerson3);


	cout<<endl;
	CPerson* objCPerson4=new CPerson(*objCPerson1);
	objCPerson4->disp();
        personList.push_back(*objCPerson4);

	cout<<endl;
	CPerson* objCPerson5=new CPerson;
	*objCPerson5=*objCPerson3;
	objCPerson5->disp();
	personList.push_back(*objCPerson5);

	cout<<"---------------------------------"<<endl;
	for(vector<CPerson>::iterator iter=personList.begin();
	    iter!=personList.end();
	    ++iter)
		{
			iter->disp();
			cout<<endl;
		}


	delete objCPerson1;
	delete objCPerson2;
	delete objCPerson3;
	delete objCPerson4;
	delete objCPerson5;
	return 0;
}
