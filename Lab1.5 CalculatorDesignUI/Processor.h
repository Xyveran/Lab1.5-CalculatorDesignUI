#pragma once
#include <string>
#include "IBaseCommand.h"

class Processor
{
private:
	Processor() {}
	static Processor* _processor;
	int baseNumber;
	int otherNumber;
	
public:
	static Processor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new Processor();
		}
		return _processor;
	}

	void SetBaseNumber(int number) {
		baseNumber = number;
	}

	void SetOtherNumber(int number) {
		otherNumber = number;
	}

	Processor(Processor& other) = delete;
	void operator=(const Processor& other) = delete;

	std::string GetDecimal() {
		return std::to_string(baseNumber);
	}

	std::string GetHexadecimal() {
		std::string result = "";
		int num = baseNumber;

		while (num > 0) {
			int mod = num % 16;
			if (mod < 10) {
				result = std::to_string(mod) + result;
			}
			else if (mod == 10) {
				result = "A" + result;
			}
			else if (mod == 11) {
				result = "B" + result;
			}
			else if (mod == 12) {
				result = "C" + result;
			}
			else if (mod == 13) {
				result = "D" + result;
			}
			else if (mod == 14) {
				result = "E" + result;
			}
			else if (mod == 15) {
				result = "F" + result;
			}
			num = num / 16;
		}
		result = "0x" + result;

		return result;
	}

	std::string GetBinary() {
		std::string result = "";
		int num = baseNumber;

		for (int i = 0; i < 32; i++)
		{
			if (num % 2 == 0) {
				result = "0" + result;
			}
			else {
				result = "1" + result;
			}
			num = num / 2;
		}
		return result;
	}

	std::string GetSum() {
		std::string result = "";
		int num = baseNumber;
		int num2 = otherNumber;

		result = std::to_string(num + num2);
	}

	std::string GetDifference() {
		std::string result = "";
		int num = baseNumber;
		int num2 = otherNumber;

		result = std::to_string(num - num2);
	}
	
	std::string GetProduct() {
		std::string result = "";
		int num = baseNumber;
		int num2 = otherNumber;

		result = std::to_string(num * num2);
	}

	std::string GetQuotient() {
		std::string result = "";
		int num = baseNumber;
		int num2 = otherNumber;

		result = std::to_string(num / num2);
	}

};

Processor* Processor::_processor = nullptr;

