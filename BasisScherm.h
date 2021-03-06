// Scherm.h: interface for the Scherm class.
//
//////////////////////////////////////////////////////////////////////

#ifndef BASISSCHERM_H
#define BASISSCHERM_H

#include <windows.h>

class BasisScherm  
{
private:
	static LRESULT StaticProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

protected:
	HINSTANCE m_hInstance;
	HWND m_hWnd;
	HMENU m_hMenu;
	HICON  m_hIcon;
	HCURSOR m_hCursor;
	HACCEL m_hAccelTable;

	DWORD m_dwCreationX;
	DWORD m_dwCreationY;
	DWORD m_dwCreationHeight;
	DWORD m_dwCreationWidth;
 	DWORD m_dwCreationFlags;
	DWORD m_dwWindowStyle;
	DWORD m_dwExWindowStyle;
	LPTSTR m_strWindowTitle;
	LPTSTR m_strWindowClass;
	HBRUSH m_hbrWindowColor;

	LRESULT InitWindowClass();
	LRESULT ClearWindowClass();
	virtual LRESULT SchermProc(UINT uMsg, WPARAM wParam, LPARAM lParam);

public:
	BasisScherm();
	virtual ~BasisScherm();

	LRESULT Create(HINSTANCE hInstance);
	LRESULT RunToClose();

};

#endif
