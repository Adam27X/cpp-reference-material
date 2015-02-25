#include <iostream>
#include <typeinfo>

template <typename T>
void ref(T const &x)
{
	std::cout << "x in ref(T const &x): " << typeid(x).name() << std::endl;
}

template <typename T>
void nonref(T x)
{
	std::cout << "x in nonref(T x): " << typeid(x).name() << std::endl;
}

int main()
{
	ref("hello");
	nonref("hello");

	return 0;
}
