
#pragma once

#if !defined MUD_MODULES || defined MUD_OBJ_LIB
#include <refl/Module.h>
#endif

#ifndef MUD_MODULES
#include <meta/obj/Module.h>
#include <meta/math/Module.h>
#endif
        
#include <util/Forward.h>
#include <util/Types.h>
#include <util/Api.h>

#include <meta/util/Convert.h>

#ifndef TOY_UTIL_REFL_EXPORT
#define TOY_UTIL_REFL_EXPORT MUD_IMPORT
#endif

namespace toy
{
	export_ class TOY_UTIL_REFL_EXPORT toy_util : public Module
	{
	private:
		toy_util();

	public:
		static toy_util& m() { static toy_util instance; return instance; }
	};
}

#ifdef TOY_UTIL_MODULE
extern "C"
TOY_UTIL_REFL_EXPORT Module& getModule();
#endif
