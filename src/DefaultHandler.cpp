#include "DefaultHandler.h"

namespace Terminal {
	
	DefaultHandler::DefaultHandler(std::unique_ptr<CommandSystem::ICommandManager> manager){
		this->parser = std::make_unique<DefaultParser>();
		this->manager = std::move(manager);
	}

	std::string DefaultHandler::handle(std::string& input) {
		this->parser->parse(input);

		return this->manager->runCommand(this->parser->getTokens()[0].getValue());

	}
}