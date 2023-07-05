#include "Terminal.h"

namespace Terminal{
	Terminal::Terminal() {
		this->prefix = ">";
		this->shouldStop = false;
	}

	void Terminal::run(){
		while (!this->shouldStop) {
			std::cout << this->prefix << " ";
			std::cin >> this->input;
			if (this->input == "exit")this->shouldStop = true;

			std::cout << this->lastInput << std::endl;

			this->lastInput = this->input;
		}
	}

}
