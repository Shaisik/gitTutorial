#include <iostream>

using namespace std;


class Point
{
private:

	int x;
	int y;

public:
	
	Point()
	{
		x = 0;
		y = 0;		
	}


	int GetX()
	{
		return x;
	}

	void SetX(int value_x)
	{
		x = value_x;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

};


class CoffeGrinder
{
public:

	void Start()
	{
		bool VoltageIsNormal = CheckVoltage();
		if (VoltageIsNormal) {
			cout << "Vzhuuh" << endl;
		}
		else
		{
			cout << "Beep Beep" << endl;
		}
	}

private:

	bool CheckVoltage()
	{
		return false;
	}

};

int main()
{
	Point a;

	a.Print();

	system("pause");
	return 0;
}