class LV{
public:
	LV();
	LV(double, double, double, double);
	void x(double);
	void y(double);
	void z(double);
	void t(double);
	double x() const;
	double y() const;
	double z() const;
	double t() const;
	double norma() const;
	double ska(const LV&) const;
	LV sum(const LV&) const;
	LV minus(const LV&) const;
	LV mul(double) const;
	void preob(double);
	void print() const;
	void read();
	LV operator+(const LV&) const;
	LV operator-(const LV&) const;
	LV operator*(double) const;
	void operator+=(const LV&);
	void operator-=(const LV&);
	void operator*=(double);
private:
	double X, Y, Z, T;
	int c = 3;
};
