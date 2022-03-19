#ifndef ITRAINER_HEADER
#define ITRAINER_HEADER

#include "ICmac.h"

namespace CCmacLib
{
	class ITrainerInput
	{
	public:
		virtual ~ITrainerInput(){}
	};

	class ITrainer
	{
	public:
		virtual ~ITrainer(){}
		virtual void Train(ICmac& cmac, ITrainerInput& arg) = 0;
	};
}

#endif