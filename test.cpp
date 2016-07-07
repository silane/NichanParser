
#include "NichanParser/NichanParser.h"
#include <iostream>
#include <ctime>

//ctime���g���ƃR���p�C���ł��Ȃ��̂�}��
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main() {
	auto thread=Nichan::ParseThreadFromUrl("http://karma.2ch.net/test/read.cgi/livemx/1466236234/l50");

	std::cout << thread.title << std::endl;

	for (const auto &res : thread.res)
	{
		std::time_t t = std::chrono::system_clock::to_time_t(res.date);
		std::cout << std::ctime(&t) << " : "<< res.message << std::endl;
	}

	auto board = Nichan::ParseBoardFromUrl("http://hayabusa7.2ch.net/livecx/subback.html");
	std::cout << board.title << std::endl;
	std::cout << board.thread[0].title << std::endl;
}