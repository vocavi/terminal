#pragma once

#include <string>
#include <iostream>
#include <memory>

#include "ITerminalHandler.h"

namespace Terminal {
	class Terminal {
	public:
		Terminal();

		void setPrefix(std::string prefix);
		std::string getLastInput();
		void run();

		inline void setHandler(std::unique_ptr<ITerminalHandler> handler) {this->handler = std::move(handler);}

	private:
		std::string prefix;
		std::string lastInput;
		std::string input;
		bool shouldStop;

		std::unique_ptr<ITerminalHandler> handler;
	};
};
