// Copyright (C) 2015 Matheus Silva
/*
This file provides base API to the engine
*/

#ifdef WIN32
#ifdef BASE_EXPORTS
#define BASE_API __declspec(dllexport)
#else
#define BASE_API __declspec(dllimport)
#endif
#else
#define BASE_API
#endif

namespace alpha_engine_base
{

}