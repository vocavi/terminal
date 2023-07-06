#pragma once

#include <string>

namespace Terminal {
	class ITerminalParser {

	public:
		virtual void parse(std::string& input) = 0;

	};
}