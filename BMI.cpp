#include <iostream>
#include <fstream>
#include <cmath>
#include "BMI.h"
#include <string>
using namespace std;

	float  data::setheight(float h)
	{
		height = h;
		return height;
	}
	float  data::setweight(float m)
	{
		weight = m;
		return weight;
	}
	void data::setbmi()
	{
		bmi = weight/pow(height/100.0,2);
	}
	float data::getBMI()
	{
		return bmi;
	}
	void data::category(int i)
	{
		for(i=1;i<6;i++)
		{
			if(15<bmi && bmi<16)
			value="Severely underweight";
			if(16<bmi && bmi<23)
			value="Underweight";
			if(23<bmi && bmi<28)
			value="Normal";
			if(28<bmi && bmi<33)
			value="Overweight";
			if(33<bmi)
			value="Obese Class I(Moderately	Obese)";
		}
	}
	string data::getcategory()
	{
		return value;
	}
