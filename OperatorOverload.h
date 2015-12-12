#include <iostream>
/*
https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
*/
template<typename T>
class R
{
private: 
	T _data;
public:
	T getData() {return _data;}
	void setData(const T& t) { _data = t;}

	/*
	Arithmetic operators
	*/

	// a = b
	virtual R& operator=(R r)  = 0;
	// a + b 
	virtual R operator+(R r)  = 0;
	// a - b
	virtual R operator-(R r)  = 0;
	//-a
	virtual R operator-()  = 0;
	//-b
	virtual R operator+() = 0;
 	
 	virtual R operator*(R r) = 0;

 	virtual R operator%(R r) = 0;

 	virtual R operator/(R r) = 0;
 	//++a
	virtual R& operator++() = 0;
	//a++
	virtual R operator++(int) = 0;
	//--a
	virtual R& operator--() = 0;
	//++a
	virtual R operator--(int) = 0;

	/*
	implements >> and  <<, why? becase: implements outsdie class will be error when compile
	
	https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Making_New_Friends
	*/
	friend std::ostream& operator<<(std::ostream &os, R<T> &r)  {
		os << r._data;
		return os;
	}

	friend std::istream& operator>>(std::istream &is, R<T> &r) {
		is >> r._data;
		return is;
	}

};

