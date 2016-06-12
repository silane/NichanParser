
#include "NichanParser/NichanParser.h"
#include <iostream>
#include <ctime>

//ctimeを使うとコンパイルできないのを抑制
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main() {
	auto thread=Nichan::ParseFromUrl("http://karma.2ch.net/test/read.cgi/livemx/1464700803//");

	std::cout << thread.title << std::endl;

	for (const auto &res : thread.res)
	{
		std::time_t t = std::chrono::system_clock::to_time_t(res.date);
		std::cout << std::ctime(&t) << " : "<< res.message << std::endl;
	}
}