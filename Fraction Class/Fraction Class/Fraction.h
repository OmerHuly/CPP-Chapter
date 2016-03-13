class Fraction
{
public:
	Fraction(); //default c'tor
	Fraction(int numerator, int denominator); //c'tor
	Fraction(int num); //convert int to fraction type c'tor
	//~Fraction() {}; //d'tor
	int getNumerator() const {return m_numerator;};
	int getDenominator() const {return m_denominator;};
	void setNumerator(int numerator) {m_numerator = numerator;};
	void setDenominator(int denominator) {m_denominator = denominator;};
	void setFraction(int numerator, int denominator);
	void print();	//print fraction
	void println();	//print fraction and new line
	float cvtToFloat () const { return ((float)m_numerator / (float)m_denominator); };	//convert fraction to float
	Fraction operator+ (const Fraction& operand) const;	//operator + overloading
	Fraction operator- (const Fraction& operand) const;	//operator - overloading
	Fraction operator- () const {return (Fraction(-m_numerator, m_denominator));};	//operator - overloading
	Fraction operator* (const Fraction& operand) const;	//operator * overloading
	Fraction operator/ (const Fraction& operand) const;	//operator / overloading

private:
	int m_numerator;
	int m_denominator;
};