#include "DefaultParser.h"

#include <iostream>

namespace Terminal {

	void DefaultParser::parse(std::string& input){
		this->tokens.clear();

		int beginIndex = 0;
		for (int i = 0; i < input.size(); ++i) {
			if (input[i] != ' ')continue;

			this->tokens.push_back(Token(input.substr(beginIndex, i - beginIndex), !beginIndex ? TokenType::COMMAND : TokenType::ARGUMENT));
			beginIndex = i+1;
		}
	}

}