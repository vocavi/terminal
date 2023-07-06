#pragma once

#include "ICommandManager.h"

#include "ITerminalHandler.h"
#include "DefaultParser.h"
#include "DefaultManager.h"

namespace Terminal {
	class DefaultHandler : public ITerminalHandler {
	
	public:
		DefaultHandler(std::unique_ptr<CommandSystem::ICommandManager> manager);

		std::string handle(std::string& input);
	private:
		std::unique_ptr<CommandSystem::ICommandManager> manager;
		std::unique_ptr<DefaultParser> parser;
	};
}
