/*
Aaron McCormick
Assignment 7
4/10/2019
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "SnowData.h"

void print_array_elements(SnowData[], int);
void sort_by_base_depth(SnowData[], int);
void sort_by_date(SnowData[], int);
double get_average_base_depth(SnowData[], int);
int main()
{
	string dates[7] = { "Jan 15", "Jan 16", "Jan 17", "Jan 18", "Jan 19", "Jan 20", "Jan 21" };
	double base_depth[7] = { 34.5, 23.6, 25.5, 31.5, 40.6, 30.9, 38.4 };

	SnowData jan_snow[7];
	int i = 0;
	for (auto& one_snow_day : jan_snow)
	{
		one_snow_day.setSnowDate(dates[i]);
		one_snow_day.setBase_depth(base_depth[i]);
		i++;
	}
	cout << setprecision(2) << fixed << showpoint;

	cout << " --- array after set functions invoked to populate array --\n";
	print_array_elements(jan_snow, 7);
	cout << "Average base depth for the period "
		<< jan_snow[0].getSnow_date() << " - "
		<< jan_snow[6].getSnow_date() << " : "
		<< get_average_base_depth(jan_snow, 7) << endl;

	sort_by_base_depth(jan_snow, 7);
	cout << " --- array after sort by base_depth --\n";
	print_array_elements(jan_snow, 7);

	sort_by_date(jan_snow, 7);
	cout << " --- array after sort by date --\n";
	print_array_elements(jan_snow, 7);

	return 0;
}
double get_average_base_depth(SnowData _array[], int size)
{
	double total_depth = 0;
	short unsigned elem = 0;


	do {

		total_depth += _array[elem];


	} while ();

	return total_depth / 7;
}
void print_array_elements(SnowData _array[], int size)
{

}

void sort_by_base_depth(SnowData _array[], int size)
{


}
void sort_by_date(SnowData _array[], int size)
{

}