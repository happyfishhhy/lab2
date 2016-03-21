#include <iostream>
#include <fstream>
#include "BMI.h"
using namespace std;

int main()
{
	int i;
	data BMI1;
	float h1,m1;

	ifstream input("file.in",ios::in);
	ofstream output("file.out",ios::out);

	if(input.is_open());
	cout << "file created successfully" << endl;

	while(input>>h1>>m1 && h1!=0 && m1!=0)
	{
		BMI1.setheight(h1);
		BMI1.setweight(m1);
		BMI1.setbmi();
		BMI1.category(i);
		output << BMI1.getBMI() << "\t" << BMI1.getcategory() << endl;
	}
	
	return 0;
}
