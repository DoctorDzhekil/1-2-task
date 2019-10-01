#include "title.h"
#include <iostream>
#include <cmath>
using namespace std;

LV::LV(){
	X = Y = Z = T = 0;
}
LV::LV(double x, double y, double z, double t){
	X = x;
	Y = y;
	Z = z;
	T = t;
}
void LV::x(double x){
	X = x;
}
void LV::y(double y){
	Y = y;
}
void LV::z(double z){
	Z = z;
}
void LV::t(double t){
	T = t;
}
double LV::x() const{
	return X;
}
double LV::y() const{
	return Y;
}
double LV::z() const{
	return Z;
}
double LV::t() const{
	return T;
}
double LV::norma() const{
	return c*c*T*T - X*X - Y*Y - Z*Z;
}
double LV::ska(const LV& second) const{
	return c*c*T*second.t() - X*second.x() - Y*second.y() - Z*second.z();
}
LV LV::sum(const LV& second) const{
	return LV(X + second.x(), Y + second.y(), Z + second.z(), T + second.t());
}
LV LV::minus(const LV& second) const{
	return LV(X - second.x(), Y - second.y(), Z - second.z(), T - second.t());
}
LV LV::mul(double k) const{
	return LV(k*X, k*Y, k*Z, k*T);
}
void LV::preob(double v){
	double g = 1 / (sqrt(1 - (v / c)*(v / c)));
	T = (T - v*Z / c / c)*g;
	Z = (X - v*T)*g;
}
void LV::print() const{
	cout << "{" << X << "," << Y << "," << Z << "," << T << "}";
}
void LV::read(){
	cin >> X >> Y >> Z >> T;
}
LV LV::operator+(const LV& it) const{
	return sum(it);
}
LV LV::operator-(const LV& it) const{
	return minus(it);
}
LV LV::operator*(double it) const{
	return mul(it);
}
void LV::operator+=(const LV& it){
	X += it.x();
	Y += it.y();
	Z += it.z();
	T += it.t();
}
void LV::operator-=(const LV& it){
	X += -it.x();
	Y += -it.y();
	Z += -it.z();
	T += -it.t();
}

void LV::operator*=(double it){
	X *= it;
	Y *= it;
	Z *= it;
	T *= it;
}
