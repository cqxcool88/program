#include<iostream>
#include <string>

int main()
{
	std::string str("test string");
	for(std::string::iterator it=str.begin(); it!=str.end(); ++it)
	std::cout << *it;
	std::cout << std::endl;
	std::cout << "the size of str is " << str.size() << " bytes." << std::endl;
	return 0;
}
