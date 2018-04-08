#pragma once
#include <string>
int __cdecl connect(std::string url, int hops, std::string data = "", int log_level = 0, bool post = false);