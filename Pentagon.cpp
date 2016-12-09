#include "Pentagon.h"

TPentagon::TPentagon()
{
	a.x = 0.0;
	a.y = 0.0;
	b.x = 0.0;
	b.y = 0.0;
	c.x = 0.0;
	c.y = 0.0;
	d.x = 0.0;
	d.y = 0.0;
	e.x = 0.0;
	e.y = 0.0;

}
TPentagon::TPentagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey)
{
	a.x = ax;
	a.y = ay;
	b.x = bx;
	b.y = by;
	c.x = cx;
	c.y = cy;
	d.x = dx;
	d.y = dy;
	e.x = ex;
	e.y = ey;
}
TPentagon::TPentagon(const TPentagon &orig)
{
	a.x = orig.a.x;
	a.y = orig.a.y;
	b.x = orig.b.x;
	b.y = orig.b.y;
	c.x = orig.c.x;
	c.y = orig.c.y;
	d.x = orig.d.x;
	d.y = orig.d.y;
	e.x = orig.e.x;
	e.y = orig.e.y;
}
double TPentagon::Square()
{
	return ((a.x * b.y + b.x * c.y + c.x * d.y + d.x * e.y + e.x * a.y) - (a.y * b.x + b.y * c.x + c.y * d.x + d.y * e.x + e.y * a.x)) / 2;
}
void TPentagon::Print()
{
	cout << this->Square() << endl;
}
istream &operator >> (istream &is, TPentagon &pent)
{
	is >> pent.a.x;
	is >> pent.a.y;
	is >> pent.b.x;
	is >> pent.b.y;
	is >> pent.c.x;
	is >> pent.c.y;
	is >> pent.d.x;
	is >> pent.d.y;
	is >> pent.e.x;
	is >> pent.e.y;
	return is;
}
ostream &operator << (ostream &os, TPentagon &pent)
{
	os << pent.a.x << endl;
	os << pent.a.y << endl;
	os << pent.b.x << endl;
	os << pent.b.y << endl;
	os << pent.c.x << endl;
	os << pent.c.y << endl;
	os << pent.d.x << endl;
	os << pent.d.y << endl;
	os << pent.e.x << endl;
	os << pent.e.y << endl;
	os << pent.Square() << endl;
	return os;
}
bool TPentagon::operator == (TPentagon &right)
{
	if (this->Square() == right.Square()) {
		return true;
	}
	else return false;
}
TPentagon& TPentagon::operator=(TPentagon &right)
{
	if (this == &right) {
		return *this;
	}
	else {
		a.x = right.a.x;
		a.y = right.a.y;
		b.x = right.b.x;
		b.y = right.b.y;
		c.x = right.c.x;
		c.y = right.c.y;
		d.x = right.d.x;
		d.y = right.d.y;
		e.x = right.e.x;
		e.y = right.e.y;
		return *this;
	}
}
TPentagon::~TPentagon()
{
	a.x = 0.0;
	a.y = 0.0;
	b.x = 0.0;
	b.y = 0.0;
	c.x = 0.0;
	c.y = 0.0;
	d.x = 0.0;
	d.y = 0.0;
	e.x = 0.0;
	e.y = 0.0;
}