// testimage.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ximage.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//CxImage::ljminfo2();
	_ftprintf(stderr, CxImage::ljminfo());
	printf("aaaa%d",1);
	getchar();
	return 0;
}

