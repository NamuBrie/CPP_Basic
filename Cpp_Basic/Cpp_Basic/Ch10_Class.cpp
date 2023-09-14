#include "Ch10_Class.h"
#include "io.h"

void Car::DriveVelocity()
{
	cout << Velocity << "km" << endl;
}

void Car::DriveTime()
{
	float Length = 100;
	cout << (100/Velocity) << "hour" << endl;
}