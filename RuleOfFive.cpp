#include <iostream>
#include <cstring>
//g++ -std=c++11 -o RuleOfFive.exe RuleOfFile.cpp
class Foo
{
	//default constructor
	Foo() : data(new char[6])
	{
		strcpy(data, "Hello");
	}
	//Copy constructor
	Foo(const Foo& other) : data(new char[strlen(other.data) + 1])
	{
		strcpy(data, other.data);
	}

	//move constructor
	Foo(Foo && other) : data(other.data)
	{
		other.data = nullptr;
	}

	//destructor
	~Foo() 
	{
		delete[] data;
	}

	//copy assignment
	Foo& operator=(const Foo& other) 
	{
		Foo temp(other);
		*this = std::move(temp);
		return *this;
	}

	//move assignment
	Foo& operator=(Foo &&other)
	{
		std::swap(data, other.data);
		//data = std::move(other.data);
		return *this;
	}

private:
	char *data;
};
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}