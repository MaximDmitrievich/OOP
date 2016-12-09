#ifndef HEXAGON_H
#define HEXAGON_H
#include "Shape.h"

using namespace std;

class THexagon : public TShape {
public:
	THexagon();
	THexagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey, double fx, double fy);
	THexagon(const THexagon &orig);
	double Square() override;
	void Print() override;
	friend istream &operator >> (istream &is, THexagon &hex);
	friend ostream &operator << (ostream &os, THexagon &hex);
	bool operator == (THexagon &right);
	THexagon& operator = (THexagon &right);
	virtual ~THexagon() override;
private:
	TCord a;
	TCord b;
	TCord c;
	TCord d;
	TCord e;
	TCord f;
};

#endif
