//------------------------------------------------------------------------------------------
// File: <stringstext.cpp>
// Purpose: implement <string and text manipulating lib>
//
// @author <Yun Hua>
// @version 1.0 2010/03/04
// 
// Copyright (C) 2010, Yun Hua
//-----------------------------------------------------------------------------------------//

#include "stdafx.h"
#include "stringstext.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cwctype>

using namespace std;

namespace CommonLib
{
	bool StringsText::CaseInsCompare(const string& s1, const string& s2) 
	{
		return((s1.size( ) == s2.size( )) &&
			equal(s1.begin( ), s1.end( ), s2.begin( ), CaseInsCharCompareN));
	}

	bool StringsText::CaseInsCompare(const wstring& s1, const wstring& s2) 
	{
		return((s1.size( ) == s2.size( )) &&
			equal(s1.begin( ), s1.end( ), s2.begin( ), CaseInsCharCompareW));
	}

	LPWSTR StringsText::StrToWChar(LPCSTR pMultiByteStr, unsigned codePage)
	{
		int nLenOfWideCharStr;
		LPWSTR pWideCharStr;

		// ������ַ�ռ��char�ռ�
		nLenOfWideCharStr = MultiByteToWideChar(codePage, 0, 
			pMultiByteStr, -1, NULL, 0);
		// �Ӷ��з���ռ�
		pWideCharStr = (LPWSTR)HeapAlloc(GetProcessHeap(), 0, nLenOfWideCharStr * sizeof(WCHAR));
		// ת��
		MultiByteToWideChar(codePage, 0, pMultiByteStr, -1, pWideCharStr, nLenOfWideCharStr);

		return pWideCharStr;	
	}

	// wchar_t to multi byte string using the code page
	bool StringsText::WCharToStr(LPCWSTR pWideCharStr, LPSTR* pMultiByteStr, unsigned codePage)
	{
		int nLenOfMultiByteStr;
		bool fOk = false;

		nLenOfMultiByteStr = ::WideCharToMultiByte(codePage, 0, pWideCharStr, -1, 
			NULL, 0, NULL, NULL);
		*pMultiByteStr = (char*)HeapAlloc(GetProcessHeap(), 0, nLenOfMultiByteStr * sizeof(CHAR));
		if (*pMultiByteStr == NULL) 
		{
			return(fOk);
		}
		::WideCharToMultiByte(codePage, 0, pWideCharStr, -1, 
			*pMultiByteStr, nLenOfMultiByteStr, NULL, NULL);
		fOk = true;
		return fOk;
	} 
}

