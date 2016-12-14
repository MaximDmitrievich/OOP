#include "Octagon.h"

TOctagon::TOctagon()
{
	this->length = 0.0;
}
TOctagon::TOctagon(double len)
{
	this->length = len;
}
TOctagon::TOctagon(const TOctagon &orig)
{
	this->length = orig.length;
}
double TOctagon::Square()
{
	return 2.0 * (this->length * this->length) * (1.0 + sqrt(2.0));
}
void TOctagon::Print()
{
	cout << "OCTAGON: " << this->Square() << endl;
}
istream &operator >> (istream &is, TOctagon &oct)
{
	is >> oct.length;
	
	return is;
}
ostream &operator << (ostream &os, TOctagon &oct)
{
	os << oct.length << endl;
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
		this->length = right.length;
		
		return *this;
	}
}
TOctagon::~TOctagon()
{
	this->length = 0.0;
}