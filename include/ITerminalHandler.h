#pragma once

#include <string>

namespace Terminal {
	class ITerminalHandler {

	public:
		virtual std::string handle(std::string& input) = 0;

	};
}