#pragma once
#include "IBaseCommand.h"
#include "Processor.h"

class AddCommand : public IBaseCommand {
private:

public:
	AddCommand() {

	}
	void Execute() {
		AddCommand();
	}
};