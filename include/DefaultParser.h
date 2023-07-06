#pragma once

#include <vector>

#include "ITerminalParser.h"
#include "Token.h"

namespace Terminal {
	class DefaultParser : public ITerminalParser {

	public:
		void parse(std::string& input) override;

		inline std::vector<Token>& getTokens() { return this->tokens; }

	private:
		std::vector<Token> tokens;
	};
}