#include <iostream>
#include <iomanip>

int main( void )
{
	std::string	String = "HI THIS IS BRAIN";
	
	std::string *stringPTR;
	stringPTR = &String;

	//references must be initialised on declaration.
	std::string &stringREF = String;

	std::cout << "\n======== Address ========" << std::endl;
	std::cout << std::left << std::setw(12) << "String: " << &String << std::endl;
	std::cout  << std::left << std::setw(12)<< "stringPTR: " << &stringPTR << std::endl;
	std::cout  << std::left << std::setw(12)<< "stringREF: " << &stringREF << std::endl;

	std::cout << "\n========= Value =========" << std::endl;
	std::cout  << std::setw(12) << "String: " << String << std::endl;
	std::cout  << std::left << std::setw(12)<< "stringPTR: " << *stringPTR << std::endl;
	std::cout  << std::left << std::setw(12)<< "stringREF: " << stringREF << std::endl;

	// std::cout << "\n======== Extras =======" << std::endl;

	// std::cout << "[Old value]" << std::endl;
	// std::cout  << std::setw(12) << "String: " << String  + " : " << &String << std::endl;
	// std::cout  << std::left << std::setw(12) << "stringPTR: " << *stringPTR + " : " << stringPTR << std::endl;

	// //pointers can be re-assigned
	// std::string otherStr = "Another string";
	// stringPTR = &otherStr;
	// std::cout << "[New value]" << std::endl;
	// std::cout  << std::setw(12) << "otherStr: " << otherStr  + " : " << &otherStr << std::endl;
	// std::cout  << std::left << std::setw(12) << "stringPTR: " << *stringPTR + " : " << stringPTR << std::endl;

	// //references cannot be re-assigned
	// // std::string &stringREF = otherStr;
	// // this would throw an error at runtime

	// The value of a pointer is the address of the variable it is pointing to
	// std::cout << "\n[Value of the address that it is pointed to]" << std::endl;
	// std::cout << "cout << *stringPTR\t: " << *stringPTR << std::endl;

	// std::cout << "\n[Value of the pointer itself]" << std::endl;
	// std::cout << "cout << stringPTR\t: " << stringPTR << std::endl;

	// std::cout << "\n[Address of the pointer]" << std::endl;
	// std::cout << "cout << &stringPTR\t: " << &stringPTR << std::endl;

}