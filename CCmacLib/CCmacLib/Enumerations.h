#ifndef ENUMERATIONS_HEADER
#define ENUMERATIONS_HEADER

namespace CCmacLib
{
	enum class CmacType
	{
		GENERIC,
		SUPERVISORY, 
		DYNAMIC_SUPERVISORY
	};


	enum TrainerType
	{
		LEAKAGE = 0,
		E_MODIFICATION,
	};
}

#endif