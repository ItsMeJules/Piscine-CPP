#include <iostream>
#include <string>
#include <fstream>

class NewReplace
{
	private:
		std::string const &matchWith_;
		std::string const &replaceWith_;
		std::string content_;
	public:
		NewReplace(std::ifstream &ifs, std::string const &matchWith, std::string const &replaceWith);
		~NewReplace();

		void wirteInStream(std::ofstream &ofs);
};