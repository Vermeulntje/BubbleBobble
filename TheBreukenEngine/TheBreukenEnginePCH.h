#pragma once

#include <stdio.h>
#include <iostream> // std::cout
#include <sstream> // stringstream
#include <vector>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#define SAFE_DELETE(p) if ((p) != NULL) { delete (p); (p) = NULL; }
