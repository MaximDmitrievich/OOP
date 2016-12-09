#ifndef OCTAGON_H
#define OCTAGON_H
#include "Shape.h"


using namespace std;

class TOctagon : public TShape {
public:
	TOctagon();
	TOctagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey, double fx, double fy, double gx, double gy, double hx, double hy);
	TOctagon(const TOctagon &orig);
	double Square() override;
	void Print() override;
	friend istream &operator >> (istream &is, TOctagon &oct);
	friend ostream &operator << (ostream &os, TOctagon &oct);
	bool operator == (TOctagon &right);
	TOctagon& operator = (TOctagon &right);
	virtual ~TOctagon() override;
private:
	TCord a;
	TCord b;
	TCord c;
	TCord d;
	TCord e;
	TCord f;
	TCord g;
	TCord h;
};

#endif
