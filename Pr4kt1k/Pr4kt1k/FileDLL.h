#pragma once

#ifdef FILEDLL_EXPORTS
#define FILEDLL_API __declspec(dllexport)
#else
#define FILEDLL_API __declspec(dllimport)
#endif

extern "C" FILEDLL_API char fillstr(char*);

