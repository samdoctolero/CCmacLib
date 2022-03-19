#include "TrainerFactory.h"
#include <stdexcept>

std::shared_ptr<CCmacLib::ITrainer> CCmacLib::TrainerFactory::CreateTrainer(CCmacLib::ICmac& cmac, CCmacLib::TrainerType type, CCmacLib::ITrainerFactoryArg& arg)
{
	switch (type)
	{
	case CCmacLib::TrainerType::E_MODIFICATION:
	case CCmacLib::TrainerType::LEAKAGE:
	default:
		throw std::invalid_argument("Unsupported trainer type.");
		break;
	}
}
