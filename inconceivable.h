#pragma once

#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

class inconceivable {
public:
	inconceivable(const std::string& var) : var_(var) {}
	inconceivable(std::string&& var) noexcept : var_(var) {}
	inconceivable(const inconceivable&& moved) noexcept : var_(moved.var_) {}
	inconceivable&& operator=(inconceivable&& moved) noexcept { var_ = moved.var_; }
	friend inconceivable operator+(inconceivable& left, inconceivable& right);
	inconceivable operator*(std::string&& number);
	friend std::ostream& operator<<(std::ostream& stream, const inconceivable& object);
private:
	std::string var_ = "";
};