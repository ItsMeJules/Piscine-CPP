#include <iostream>
#include <fstream>
#include <string>
#include "NewReplace.hpp"

NewReplace::NewReplace(std::ifstream &ifs, std::string const &matchWith, std::string const &replaceWith):
	matchWith_(matchWith), replaceWith_(replaceWith) {
		std::string buf;

		while (std::getline(ifs, buf))
			content_.append(buf);
	}

NewReplace::~NewReplace() {}

void NewReplace::wirteInStream(std::ofstream &ofs) {
	size_t index;
	size_t prevIndex = 0;
	
	while ((index = content_.substr(prevIndex).find(matchWith_)) != std::string::npos)  {
		content_.erase(index, matchWith_.size());
		content_.insert(index, replaceWith_);
	}
	ofs << content_;
}