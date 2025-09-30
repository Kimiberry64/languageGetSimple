// languageGetSimple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

INT 
WINAPI 
wWinMain(
	_In_	  HINSTANCE	 hInstance,
	_In_opt_  HINSTANCE	 hPrevInstance,
	_In_      PWSTR		 szCmdLine,
	_In_      INT		 nShowCmd
)
{
	UNREFERENCED_PARAMETER( szCmdLine );
	UNREFERENCED_PARAMETER( nShowCmd );

	UINT uLanguageId = GetSystemDefaultLangID( ); // Get system language ID
	WORD wPrimaryLanguage = PRIMARYLANGID( uLanguageId ); // Primary language ID

	if ( wPrimaryLanguage == LANG_POLISH ) // LANG_POLISH can be changed
	{
		MessageBoxW( NULL, L"This system is in Polish!", L"languageGetSimple", MB_OK | MB_ICONERROR );
		ExitProcess( 0 );
	}
	else
	{
		MessageBoxW( NULL, L"This system is in English", L"languageGetSimple", MB_OK | MB_ICONERROR );
		ExitProcess( 0 );
	}
}