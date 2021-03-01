
#pragma once
#include <string>
	using namespace std;
	class Circle
	{
	private:
		int x;
		int y;
		int R;
		
	public:
		int getX() const { return x; }
		int getY() const { return y; }
		int getR() const { return R; }
		bool setX(int);
		bool setY(int);
		bool setR(int);
		double S() const { return 3.14 * R*R; }
		double Ñ() const { return 2*3.14 * R ; }
		bool Init(int x, int y, int R );
		void Read();
		void Display();
	};


