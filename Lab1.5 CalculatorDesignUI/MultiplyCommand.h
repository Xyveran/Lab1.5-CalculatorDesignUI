#pragma once
#include "IBaseCommand.h"
#include "Processor.h"

class MultiplyCommand : public IBaseCommand {
private:
	Processor* _processor = nullptr;
	int _base = 0;
	int _other = 0;
public:
	MultiplyCommand(Processor* processor, int base, int other) {
		_processor = processor;
		_base = base;
		_other = other;

	}
	void Execute() {
		_processor->SetBaseNumber(_base);
		_processor->SetOtherNumber(_other);
		_processor->GetProduct();
	}
};