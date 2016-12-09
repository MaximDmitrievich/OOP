#include "Hexagon.h"

THexagon::THexagon()
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
	f.x = 0.0;
	f.y = 0.0;

}
THexagon::THexagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey, double fx, double fy)
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
	f.x = fx;
	f.y = fy;
}
THexagon::THexagon(const THexagon &orig)
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
	f.x = orig.f.x;
	f.y = orig.f.y;
}
double THexagon::Square()
{
	return (((a.x * b.y + b.x * c.y + c.x * d.y + d.x * e.y + e.x * f.y + f.x * a.y) - (a.y * b.x + b.y * c.x + c.y * d.x + d.y * e.x + e.y * f.x + f.y * a.x)) / 2);
}
void THexagon::Print()
{
	cout << this->Square() << endl;
}
istream &operator >> (istream &is, THexagon &hex)
{
	is >> hex.a.x;
	is >> hex.a.y;
	is >> hex.b.x;
	is >> hex.b.y;
	is >> hex.c.x;
	is >> hex.c.y;
	is >> hex.d.x;
	is >> hex.d.y;
	is >> hex.e.x;
	is >> hex.e.y;
	is >> hex.f.x;
	is >> hex.f.y;
	return is;
}
ostream &operator << (ostream &os, THexagon &hex)
{
	os << hex.a.x << endl;
	os << hex.a.y << endl;
	os << hex.b.x << endl;
	os << hex.b.y << endl;
	os << hex.c.x << endl;
	os << hex.c.y << endl;
	os << hex.d.x << endl;
	os << hex.d.y << endl;
	os << hex.e.x << endl;
	os << hex.e.y << endl;
	os << hex.f.x << endl;
	os << hex.f.y << endl;
	os << hex.Square() << endl;
	return os;
}
bool THexagon::operator == (THexagon &right)
{
	if (this->Square() == right.Square()) {
		return true;
	}
	else return false;
}
THexagon& THexagon::operator=(THexagon &right)
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
		f.x = right.f.x;
		f.y = right.f.y;
		return *this;
	}
}
THexagon::~THexagon()
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
	f.x = 0.0;
	f.y = 0.0;
}