#pragma once

#include "TokenType.h"
#include <string>

namespace Terminal {
	class Token{
	public:
		Token(const std::string value, const TokenType type) :value(value), type(type) {}

		inline const std::string& getValue() const { return this->value; }
		inline const TokenType getType()  const{ return this->type; }

	private:
		const std::string value;
		const TokenType type;
	};
}
