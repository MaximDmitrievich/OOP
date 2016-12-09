#ifndef PENTAGON_H
#define PENTAGON_H
#include "Shape.h"

using namespace std;


class TPentagon : public TShape {
public:
	TPentagon();
	TPentagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey);
	TPentagon(const TPentagon &orig);
	double Square() override;
	void Print() override;
	friend istream &operator >> (istream &is, TPentagon &pent);
	friend ostream &operator << (ostream &os, TPentagon &pent);
	bool operator == (TPentagon &right);
	TPentagon& operator = (TPentagon &right);
	virtual ~TPentagon() override;
private:
	TCord a;
	TCord b;
	TCord c;
	TCord d;
	TCord e;
};

#endif
