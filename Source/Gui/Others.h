#ifndef __OTHERS_H__
#define __OTHERS_H__
/*
class CWndModuleSelector : public CWnd
{
public:
	CWndMenuBlock	m_itmOscilloscope;
	CWndMenuBlock	m_itmSpectrum;
	CWndMenuBlock	m_itmGenerator;
	CWndMenuBlock	m_itmSettings;
	CWndMenuBlock	m_itmAbout;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndModuleSelector", dwFlags, CRect(0, 16, 400, 240), pParent);

		#define _BORDER 20
		#define _SPACING 8
		#define _LEFT(x) m_rcClient.left+_BORDER+(m_rcClient.Width()-_BORDER*2-_SPACING)*(x)/3
		#define _RIGHT(x) _LEFT(x+1)-_SPACING
		#define _TOP(y) m_rcClient.top+_BORDER+(m_rcClient.Height()-_BORDER*2-_SPACING)*(y)/3
		#define _BOTTOM(y) _TOP(y+1)-_SPACING
		#define _ITEM(x,y) CRect(_LEFT(x), _TOP(y), _RIGHT(x), _BOTTOM(y))

		m_itmOscilloscope.Create( "Oscillo\nscope", RGB565(ffffff), _ITEM(0, 0), this );
		m_itmSpectrum.Create( "Spectrum\nanalyser", RGB565(ffffff), _ITEM(1, 0), this );
		m_itmGenerator.Create( "Signal\nGenerator", RGB565(ffffff), _ITEM(2, 0), this );

		m_itmSettings.Create( "Settings", RGB565(ffffff), _ITEM(0, 1), this );
		m_itmAbout.Create( "About", RGB565(ffffff), _ITEM(1, 1), this );

	}

	virtual void OnPaint()
	{
		BIOS::LCD::Bar( m_rcClient.left, m_rcClient.top, m_rcClient.right, m_rcClient.bottom, RGB565(0020ff));
		CWnd::OnPaint();
	}

	virtual void OnKey(ui16 nKey)
	{
		if ( nKey & BIOS::KEY::KeyEnter )
		{
			const char* strTarget = NULL;
			if ( GetFocus() == &m_itmOscilloscope )
				strTarget = "Oscilloscope"; 
			if ( GetFocus() == &m_itmSpectrum )
				strTarget = "Spectrum analyser";
			if ( GetFocus() == &m_itmGenerator )
				strTarget = "Generator"; 
			if ( GetFocus() == &m_itmSettings )
				strTarget = "Settings"; 
			if ( GetFocus() == &m_itmAbout )
				strTarget = "About";
			
			if (strTarget)
			{
				SendMessage( &MainWnd.m_wndModuleSel, ToWord('g', 'o'), (NATIVEPTR)strTaget);
			}
		}
	}
};
*/
class CWndMenuCursor : public CWnd
{
public:
	CWndMenuItem	m_itmX1;
	CWndMenuItem	m_itmX2;
	CWndMenuItem	m_itmY1;
	CWndMenuItem	m_itmY2;
	CWndMenuItem	m_itmMode;
	CWndMenuItem	m_itmDeltaX;
	CWndMenuItem	m_itmDeltaY;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuCursor", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itmX1.Create("X1", RGB565(808080), 1, this);
		m_itmX2.Create("X2", RGB565(808080), 1, this);
		m_itmY1.Create("Y1", RGB565(808080), 1, this);
		m_itmY2.Create("Y2", RGB565(808080), 1, this);
		m_itmDeltaX.Create("dX", RGB565(ffffff), 2, this);
		m_itmDeltaY.Create("dY", RGB565(ffffff), 2, this);
		m_itmMode.Create("Mode\nManual", RGB565(808080), 1, this);
	}
};

class CWndMenuMeas : public CWnd
{
public:
	CWndMenuItem	m_itm1;
	CWndMenuItem	m_itm2;
	CWndMenuItem	m_itm3;
	CWndMenuItem	m_itm4;
	CWndMenuItem	m_itm5;
	CWndMenuItem	m_itm6;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuMeas", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itm1.Create("RMS:\n5.323V", RGB565(ffff00), 2, this);
		m_itm2.Create("Vpp:\n12.000V", RGB565(ffff00), 2, this);
		m_itm3.Create("f:\n128.3 Hz", RGB565(ffff00), 2, this);
		m_itm4.Create("Lo:\n5.323V", RGB565(00ffff), 2, this);
		m_itm5.Create("Hi:\n12.000V", RGB565(00ffff), 2, this);
		m_itm6.Create("Avg:\n0.233V", RGB565(00ff00), 2, this);
	}
};

class CWndMenuSettings : public CWnd
{
public:
	CWndMenuItem	m_itmSave;
	CWndMenuItem	m_itmBacklight;
	CWndMenuItem	m_itmVolume;
	CWndMenuItem	m_itmLanguage;
	CWndMenuItem	m_itmAutoOff;
	CWndMenuItem	m_itmAbout;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuSettings", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itmSave.Create("Save", RGB565(ffffff), 1, this);
		m_itmBacklight.Create("Backl.", RGB565(808080), 1, this);
		m_itmVolume.Create("Volume", RGB565(808080), 1, this);
		m_itmLanguage.Create("Language\nEnglish", RGB565(808080), 2, this);
		m_itmAutoOff.Create("Auto off\n5 min", RGB565(808080), 2, this);
		m_itmAbout.Create("About", RGB565(808080), 1, this);
	}
};

class CWndMenuDisplay : public CWnd
{
public:
	CWndMenuItem	m_itmMode;
	CWndMenuItem	m_itmDisplay;
	CWndMenuItem	m_itmDomain;
	CWndMenuItem	m_itmPersist;
	CWndMenuItem	m_itmAutoOff;
	CWndMenuItem	m_itmAbout;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuDisplay", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itmMode.Create("Mode\nX-T", RGB565(808080), 2, this);
		m_itmDisplay.Create("Display\nPoints", RGB565(808080), 2, this);
		m_itmDomain.Create("Domain\nTime", RGB565(808080), 2, this);
		m_itmPersist.Create("Persist\nOff", RGB565(808080), 2, this);
	}
};

class CWndMenuMath : public CWnd
{
public:
	CWndMenuItem	m_itmChannel;
	CWndMenuItem	m_itmSource1;
	CWndMenuItem	m_itmSource2;
	CWndMenuItem	m_itmOperation;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuMath", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itmChannel.Create("Off", RGB565(0000ff), 2, this);
		m_itmSource1.Create("Operand1\nChannel\nCh1", RGB565(ffff00), 3, this);
		m_itmSource2.Create("Operand2\nConstant\n4.0", RGB565(808080), 3, this);
		m_itmOperation.Create("Operator\nMultiply", RGB565(808080), 2, this);
	}
};

class CWndMenuTools : public CWnd
{
public:
	CWndMenuItem	m_itmBaudDet;
	CWndMenuItem	m_itmUartDecoder;
	CWndMenuItem	m_itmArea;

	virtual void Create(CWnd *pParent, ui16 dwFlags) 
	{
		CWnd::Create("CWndMenuTools", dwFlags, CRect(320-CWndMenuItem::MarginLeft, 20, 400, 240), pParent);
		m_itmBaudDet.Create("BaudDet", RGB565(808080), 1, this);
		m_itmUartDecoder.Create("Uart", RGB565(808080), 1, this);
		m_itmArea.Create("Area", RGB565(808080), 1, this);
	}
};

class CWndMessageBox : public CWnd
{
	ui16 m_clrFrame;
	PCSTR m_strMessage;

public:
	void Show(CWnd* pParent, PCSTR strCaption, PCSTR strMessage, ui16 nColor)
	{
		m_clrFrame = nColor;
		m_strMessage = strMessage;

		if ( IsWindow() )
		{
			KillTimer();
			StopModal();	// will destroy this window
		}

		CWnd::Create(strCaption, CWnd::WsVisible, CRect(40, 100, 360, 160), pParent);
		StartModal();
		BIOS::Beep(100);
		SetTimer(3000);
	}

	virtual void OnPaint()
	{
		CRect rcClient = m_rcClient;
		CDesign::Window(m_rcClient, m_clrFrame);

		BIOS::LCD::Print( rcClient.CenterX()-((ui8)strlen(m_pszId)<<2), rcClient.top+2, 
			RGB565(000000), RGBTRANS, m_pszId);

		rcClient.Deflate(2+12+4, 2+14+2, 2+12+4, 2+2+0);
		int nExtentW = strlen(m_strMessage)*8;
		int nExtentH = 14;

		BIOS::LCD::Print( rcClient.Center().x - (nExtentW >> 1), rcClient.Center().y - (nExtentH >> 1 ),
			RGB565(000000), RGBTRANS, m_strMessage);		
	}

	virtual void OnKey(ui16 nKey)
	{
		KillTimer();
		StopModal();
	}


	virtual void OnTimer()
	{		
		KillTimer();
		StopModal();
	}
};

class CWndButton : public CWnd
{
public:
	virtual void OnPaint()
	{
		ui16 clr = HasFocus() ? RGB565(ffffff) : RGB565(000000);

		ui16 x = m_rcClient.left;
		x -= 8;
		x += BIOS::LCD::Draw( x, m_rcClient.top, clr, RGBTRANS, sel_left );
		x += BIOS::LCD::Print( x, m_rcClient.top, RGBTRANS, clr, this->m_pszId );
		x += BIOS::LCD::Draw( x, m_rcClient.top, clr, RGBTRANS, sel_right );
	}	
	virtual void OnKey(ui16 nKey)
	{
		if ( nKey == BIOS::KEY::KeyEnter )
		{
			GetParent()->OnKey( nKey );
			return;
		}
		CWnd::OnKey( nKey );
	}
};

class CWndConfirm : public CWnd
{
	ui16 m_clrFrame;
	PCSTR m_strMessage;
	PCSTR m_strButton1;
	PCSTR m_strButton2;
	CWndButton m_wndButton1;
	CWndButton m_wndButton2;

public:
	void Show(CWnd* pParent, PCSTR strCaption, PCSTR strMessage, ui16 nColor, PCSTR strButton1, PCSTR strButton2)
	{
		m_clrFrame = nColor;
		m_strMessage = strMessage;
		m_strButton1 = strButton1;
		m_strButton2 = strButton2;

		if ( IsWindow() )
			StopModal();	// will destroy this window
		
		int nLines = 1;
		for ( int i = 0; strMessage[i]; i++ )
			if ( strMessage[i] == '\n' )
				nLines++;

		CWnd::Create(strCaption, CWnd::WsVisible | CWnd::WsModal, CRect(30, 90, 350, 140 + nLines*16), pParent);
		m_wndButton1.Create( strButton1, CWnd::WsVisible, 
			CRect( m_rcClient.left + 20, m_rcClient.bottom - 20, m_rcClient.left + 20 + 40, m_rcClient.bottom - 4 ),
			this);
		m_wndButton2.Create( strButton2, CWnd::WsVisible, 
			CRect( m_rcClient.right - 20 - 40, m_rcClient.bottom - 20, m_rcClient.right - 20, m_rcClient.bottom - 4 ),
			this);
		StartModal( &m_wndButton1 );
	}

	void Hide()
	{
		if ( IsWindow() )
			StopModal();
	}

	virtual void OnPaint()
	{
		CRect rcClient = m_rcClient;
		CDesign::Window(m_rcClient, m_clrFrame);

		BIOS::LCD::Print( rcClient.CenterX()-((ui8)strlen(m_pszId)<<2), rcClient.top+2, 
			RGB565(000000), RGBTRANS, m_pszId);

		rcClient.Deflate(2+12+4, 2+14+2, 2+12+4, 2+2+0);

		BIOS::LCD::Print( rcClient.left + 4, rcClient.top + 4,
			RGB565(000000), RGBTRANS, m_strMessage);		
	}
	virtual void OnKey(ui16 nKey)
	{
		if ( nKey & BIOS::KEY::KeyEnter )
		{
			_ASSERT( GetFocus() );
			SendMessage( GetParent(), ToWord('e', 'd'), (ui32)GetFocus()->m_pszId);
		}
	}
};

#endif