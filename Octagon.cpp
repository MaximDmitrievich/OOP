#include "Octagon.h"

TOctagon::TOctagon()
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
	g.x = 0.0;
	g.y = 0.0;
	h.x = 0.0;
	h.y = 0.0;
}
TOctagon::TOctagon(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy, double ex, double ey, double fx, double fy, double gx, double gy, double hx, double hy)
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
	g.x = gx;
	g.y = gy;
	h.x = hx;
	h.y = hy;
}
TOctagon::TOctagon(const TOctagon &orig)
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
	g.x = orig.g.x;
	g.y = orig.g.y;
	h.x = orig.h.x;
	h.y = orig.h.y;
}
double TOctagon::Square()
{
	return ((a.x * b.y + b.x * c.y + c.x * d.y + d.x * e.y + e.x * f.y + f.x * g.y + g.x * h.y + h.x * a.y) - (a.y * b.x + b.y * c.x + c.y * d.x + d.y * e.x + e.y * f.x + f.y * g.x + g.y * h.x + h.y * a.x)) / 2;
}
void TOctagon::Print()
{
	cout << this->Square() << endl;
}
istream &operator >> (istream &is, TOctagon &oct)
{
	is >> oct.a.x;
	is >> oct.a.y;
	is >> oct.b.x;
	is >> oct.b.y;
	is >> oct.c.x;
	is >> oct.c.y;
	is >> oct.d.x;
	is >> oct.d.y;
	is >> oct.e.x;
	is >> oct.e.y;
	is >> oct.f.x;
	is >> oct.f.y;
	is >> oct.g.x;
	is >> oct.g.y;
	is >> oct.h.x;
	is >> oct.h.y;
	return is;
}
ostream &operator << (ostream &os, TOctagon &oct)
{
	os << oct.a.x << endl;
	os << oct.a.y << endl;
	os << oct.b.x << endl;
	os << oct.b.y << endl;
	os << oct.c.x << endl;
	os << oct.c.y << endl;
	os << oct.d.x << endl;
	os << oct.d.y << endl;
	os << oct.e.x << endl;
	os << oct.e.y << endl;
	os << oct.f.x << endl;
	os << oct.f.y << endl;
	os << oct.g.x << endl;
	os << oct.g.y << endl;
	os << oct.h.x << endl;
	os << oct.h.y << endl;
	os << oct.Square() << endl;
	return os;
}
bool TOctagon::operator == (TOctagon &right)
{
	if (this->Square() == right.Square()) {
		return true;
	}
	else return false;
}
TOctagon& TOctagon::operator=(TOctagon &right)
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
		g.x = right.g.x;
		g.y = right.g.y;
		h.x = right.h.x;
		h.y = right.h.y;
		return *this;
	}
}
TOctagon::~TOctagon()
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
	g.x = 0.0;
	g.y = 0.0;
	h.x = 0.0;
	h.y = 0.0;
}