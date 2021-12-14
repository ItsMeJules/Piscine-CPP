#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>
#include <map>

class Karen {
	typedef void (Karen::*voidFuncPtr)();

	private:
		std::map<std::string, voidFuncPtr> map_;

		void debug();
		void info();
		void warning();
		void error();
	public:
		Karen();
		~Karen();

		void complain(std::string level);
};

#endif