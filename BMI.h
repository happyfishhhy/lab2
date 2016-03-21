#include <iostream>
#include <fstream>
using namespace std;

class data
{
	public:
		void setbmi();
		float getBMI();
		float setheight(float h);
		float setweight(float m);
		void category(int i);
		string getcategory();
	private:
		float height;
		float weight;
		float bmi;
		string value;
};
