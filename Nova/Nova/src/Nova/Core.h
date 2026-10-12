#pragma once

#ifdef PLTAFORM_NOVA
	#ifdef NOVA_BUILD_DLL
		#define NOVA_API __declspec(dllexport)
	#else
		#define NOVA_API __declspec(dllimport)
	#endif

#endif
