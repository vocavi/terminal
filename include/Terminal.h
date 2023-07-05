#pragma once

#include <string>
#include <iostream>
#include <memory>

namespace Terminal {
	class Terminal {
	public:
		Terminal();

		void setPrefix(std::string prefix);
		std::string getLastInput();
		void run();

	private:
		std::string prefix;
		std::string lastInput;
		std::string input;
		bool shouldStop;
	};
};
