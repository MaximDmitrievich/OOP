#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <cstdlib>
#include <memory>

class TCord {
public:
	double x;
	double y;
};

class TShape {
public:
	virtual double Square() = 0;
	virtual void Print() = 0;
	virtual ~TShape() {};
};

#endif
