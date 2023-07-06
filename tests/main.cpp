#include "Terminal.h"
#include "DefaultHandler.h"

class TestCommand : public CommandSystem::ICommand {
public:
	inline std::string onExecute() {
		return std::string("Hi, this is a test");
	}
};

int main() {
	
	std::unique_ptr<CommandSystem::DefaultCommandManager> manager = std::make_unique<CommandSystem::DefaultCommandManager>();

	manager->registerCommand("test", std::make_unique<TestCommand>());
	
	Terminal::Terminal term;
	term.setHandler(std::make_unique<Terminal::DefaultHandler>(std::move(manager)));
	term.run();
	return 0;
}