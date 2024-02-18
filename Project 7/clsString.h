#pragma once
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

class clsString
{
private:
	string _Value = "";
	int _CurrIdx = 0;

protected:
	clsDynamicArray<string> _Str;

public:
	string getValue()
	{
		if (_Str.IsEmpty())
		{
			return "";
		}
		else
		{
			return _Str.GetItem(_CurrIdx);
		}
	}

	void setValue(string newValue)
	{
		if (_Str.IsEmpty())
		{
			_CurrIdx = 0;
		}
		else
		{
			_CurrIdx++;
		}

		_Str.InsertAtEnd(newValue);
	}

	void undo()
	{
		_CurrIdx--;
	}

	void redo()
	{
		_CurrIdx++;
	}

	__declspec(property(get = getValue, put = setValue)) string Value;
};
