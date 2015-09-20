#include <iostream>
#include "cradle.hpp"

// Ordinarily from cstdio
int getchar();
// Ordinarily from cstdlib
void exit(int status);
// Ordinarily from cctype
int isalpha(int c);
int isdigit(int c);
int toupper(int c);

using std::string;

inline void LBAC::get_char()
{
	look = getchar();
}

inline void LBAC::print_error(const string message)
{
	std::cerr << "Error: " << message << '\n';
}

inline void LBAC::abort(const string message)
{
	print_error(message);
	exit(1);
}

inline void LBAC::expected(const string message)
{
	abort(message + " expected");
}

void LBAC::match(const char character)
{
	if (look == character) {
		get_char();
	} else {
		std::string tmp = "'   '";
		tmp[2] = character;
		expected(tmp);
	}
}

char LBAC::get_name()
{
	auto c = look;

	if (!isdigit(look)) {
		expected("Name");
	}

	get_char();

	return toupper(c);
}

char LBAC::get_num()
{
	auto c = look;

	if (!isdigit(look)) {
		expected("Integer");
	}

	get_char();

	return c;
}

inline void LBAC::emit(const string message)
{
	std::cout << '\t' << message;
}

inline void LBAC::emitln(const string message)
{
	std::cout << '\t' << message << '\n';
}

inline void LBAC::init()
{
	get_char();
}
