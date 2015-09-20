/** @file cradle.hpp
	Holds the basic io of the compiler.
*/

#ifndef CRADLE_H_
#define CRADLE_H_

#include <iostream>
// For toupper()
#include <cctype>

//! Stands for Let's Build a Compiler
namespace LBAC {
//! Most recent character read from stdin.
char look;

//! Reads a character from stdin into look.
void get_char();
/** @brief Prints error message to stderr.
	@param message The error message to print.
*/
void print_error(const std::string message);
/** @brief Print error and exit program with exit code of 1.
	@param message The error message to print.
*/
void abort(const std::string message);
/** @brief Abort program with message saying that a string was expected.
	@param message The error message, which will have the string " expected" appended to it.
*/
void expected(const std::string string);
/** @brief Match a given character.
	If character is equivalent to look, read another character into look.
	Otherwise, abort with error message expecting character.
	@param character The given character to match.
*/
void match(const char character);

//! Read an identifier from stdin.
char get_name();
//! Read a number from stdin.
char get_num();

//! Print a tab with a string.
void emit(const std::string message);
//! Print a tab with a string and a newline.
void emitln(const std::string message);
//! Initialization for the compiler.
void init();
}

#endif // CRADLE_H_
