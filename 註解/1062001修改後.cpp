#include "stdafx.h"
#include <iostream>//definition input/output
#include <string>//program uses C++ standard string class
using namespace std;
class CBODY //CBODY class definition
{
private: //Declared functions can only be used by their own categories  //
	double weight;  // kg   
	double height;  // m   
public: //all functions can modify
	CBODY() :weight(1)
	{
		height = 0;
	}
	CBODY(double w, double h)  //  define CBODY(w, h) 
	{
		setData(w, h);  // w, h turn to function setData 
	}
	void setData(double w, double h) //assign setData cant return value 
	{
		weight = w; // kg
		height = h / 100.;  // m
	}
	double getBMI()   
	{
		return weight / height / height;  //weight/(height^2) 
	}
	int getStatus()  //define getStatus
	{
		double upper = 24.5;//Define the upper value 
		double lower = 18.5;//Define the lower value 
		if (getBMI() > upper) return 1; 
		else if (getBMI() < lower) return -1;    
		else return 0;
		//if (getBMI() <= upper && getBMI() >= lower) return 0;
	}
};
class App//APP class definition
{
public://all functions can modify
	void run()   //define run and cant return
	{
		//CBODY body;
		CBODY body(60, 170);  
		//string status[3] = { "over","normal","under" };
		string status[3] = { "under","normal","over" };
		//body.weight = 60;
		//body.height = 180;
		//body.setData(60, 180);
		cout << "the bmi=" << body.getBMI() << endl;

		cout << status[body.getStatus() + 1] << endl;

		/*if (body.getStatus() == 1) cout << status[0] << endl;
		else if (body.getStatus() == 0) cout << status[1] << endl;
		else cout << status[2] << endl;*/

		/*if (body.getStatus() == 1) cout << "over" << endl;
		else if (body.getStatus() == 0) cout << "normal" << endl;
		else cout << "under" << endl;*/

		//if (body.getStatus() == 1) cout << "over" << endl;
		//if (body.getStatus() == 0) cout << "normal" << endl;
		//if (body.getStatus() == -1) cout << "under" << endl;
	}
};
int main()
{
	App app;
	app.run();//Move to run function from class app
	return 0;
} // end main
