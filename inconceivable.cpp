#include "inconceivable.h"

inconceivable operator+(inconceivable& left, inconceivable& right) {
	boost::multiprecision::cpp_int left_(left.var_), right_(right.var_);
	boost::multiprecision::cpp_int res = left_ + right_;
	std::string tmp { res.str() };
	inconceivable to_return = inconceivable(tmp);
	
	return to_return;
}

inconceivable inconceivable::operator*(std::string&& number) {
	boost::multiprecision::cpp_int left(var_), right(number);
	boost::multiprecision::cpp_int res = left * right;
	std::string tmp { res.str() };
	inconceivable to_return = inconceivable(tmp);

	return to_return;
}

std::ostream& operator<<(std::ostream& stream, const inconceivable& object) {
	stream << object.var_;

	return stream;
}