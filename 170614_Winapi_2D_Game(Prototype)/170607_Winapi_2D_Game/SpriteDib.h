#ifndef __SPRITE_DIB__
#define __SPRITE_DIB__

#include "stdafx.h"

class CSpriteDib
{
public:
	struct st_SPRITE
	{
		BYTE	*bypImage;
		int		iWidth;
		int		iHeight;
		int		iPitch;

		int		iCenterPointX;
		int		iCenterPointY;
	};
	CSpriteDib(int iMaxSprite, DWORD dwColorKey);
	virtual ~CSpriteDib();


	BOOL LoadDibSprite(int iSpriteIndex, WCHAR* szFileName, int iCenterPointX, int iCenterPointY);
	void ReleaseSprite(int iSpriteIndex);

	void DrawSprite(int iSpriteIndex, int iDrawX, int iDrawY, BYTE *bypDest, int iDestWidth, int iDestHeight, int iDestPitch, int iDrawLen = 100);
	void DrawSpriteRed(int iSpriteIndex, int iDrawX, int iDrawY, BYTE *bypDest, int iDestWidth, int iDestHeight, int iDestPitch, int iDrawLen = 100);
	void DrawSprite50(int iSpriteIndex, int iDrawX, int iDrawY, BYTE *bypDest, int iDestWidth, int iDestHeight, int iDestPitch, int iDrawLen = 100);

	void DrawImage(int iSpriteIndex, int iDrawX, int iDrawY, BYTE *bypDest, int iDestWidth, int iDestHeight, int iDestPitch, int iDrawLen = 100);

protected:
	int			m_iMaxSprite;
	st_SPRITE	*m_stpSprite;
	DWORD		m_dwColorKey;
};

extern CSpriteDib g_cSprite;

#endif 