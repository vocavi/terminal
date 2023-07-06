#include "DefaultHandler.h"

namespace Terminal {
	
	DefaultHandler::DefaultHandler(){
		this->parser = DefaultParser();
	}

	std::string DefaultHandler::handle(std::string& input) {
		this->parser.parse(input);
	}
}