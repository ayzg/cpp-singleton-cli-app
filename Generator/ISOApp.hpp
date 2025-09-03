#pragma once
#include <cassert>
#include <string>
#include <deque>


class ISOApp {
	// TYPES
public:
	using arg_list_type = std::deque<std::string>;

	// Attributes
private:
	arg_list_type args_;
	static ISOApp* singletonPtr_;


	// Operations

private:
	friend int main(int argc, char* argv[]);
	static int main(int argc, char* argv[]);

protected:
	ISOApp();
	virtual ~ISOApp() {}
	arg_list_type const& args() const { return args_; }
	virtual int run() = 0;
};
