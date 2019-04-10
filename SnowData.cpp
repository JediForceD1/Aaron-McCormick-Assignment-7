#include "SnowData.h"
/*
	Class default constructor
	Sets default values for class private variables
*/
SnowData::SnowData()
{
	snow_date = "";
	base_depth = 0;
}
/*
	Overloaded constructor
	Parameters used to populate class private variables via set functions
*/
SnowData::SnowData(string _date, double _inches)
{
	setSnowDate(_date);
	base_depth = 0;
	setBase_depth(_inches);
}
/*
	print functions
	prints out class private variables
*/
void SnowData::print()
{
	cout << setw(15) << left << snow_date
		<< setw(5) << fixed << showpoint << setprecision(2) << right
		<< base_depth << endl;
}
/*
	accessor function for snow_date
*/
string SnowData::getSnow_date()
{
	return snow_date;
}
/*
		accessor function for base_depth

*/
double SnowData::getBase_depth()
{
	return base_depth;
}
/*
	mutator function for base_depth.
	ensures that base_depth is not set to a negative value
*/
void SnowData::setBase_depth(double _inches)
{
	if (_inches >= 0)
		base_depth = _inches;
}
/*
		mutator function for snow_date

*/
void SnowData::setSnowDate(string _date)
{
	snow_date = _date;
}