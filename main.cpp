#include <iostream>
#include <string>

#include "inconceivable.h"

using namespace std;

int main(int argc, char** argv) {
	auto alpha = inconceivable("114575");
	auto bravo = inconceivable("78524");
	auto x_ray = alpha + bravo;
	auto yankee = x_ray * "64356384";

	cout << x_ray << '\n'
		<< yankee << endl;

	return 0;
}