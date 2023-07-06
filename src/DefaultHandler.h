#pragma once

#include "ITerminalHandler.h"

#include "DefaultParser.h"

namespace Terminal {
	class DefaultHandler : public ITerminalHandler {
	
	public:
		DefaultHandler();

		std::string handle(std::string& input);
	private:
		ITerminalParser parser;
	};
}
