// testimage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ximage.h"


////////////////////////////////////////////////////////////////////////////////
/**
 * \author [Ian Knight]
 */
int	convert_image_type( TCHAR *input_image , int typein , TCHAR *output_image , int typeout )
{
	CxImage image;

	if(!image.Load(input_image,typein))
	{
		_ftprintf(stderr, _T("%s\n"), image.GetLastError());
		_ftprintf(stderr, _T("error loading %s\n"), input_image);
		return 1;
	}

	if(!image.Save(output_image,typeout))
	{
		_ftprintf(stderr, _T("%s\n"), image.GetLastError());
		_ftprintf(stderr, _T("error saving %s\n"), output_image);
		return 1;
	}

	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//CxImage::ljminfo2();
	_ftprintf(stderr, CxImage::GetVersion());
	int status = convert_image_type(argv[1] , CXIMAGE_FORMAT_BMP , argv[2] , CXIMAGE_FORMAT_PNG );
	printf("status=%d",status);
	getchar();
	return 0;
}

