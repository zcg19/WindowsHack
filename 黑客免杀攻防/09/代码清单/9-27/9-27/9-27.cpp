/*
*  《黑客免杀攻防》例子代码
*
*  作    者：任晓珲（A1Pass）
*  日    期：2010-01-28
*  本书官网：http://book.hackav.com  或 http://www.hzbook.com
*  作者微博：http://weibo.com/a1pass 或 http://t.qq.com/a1pass
*  作者博客：http://a1pass.blog.163.com
*/
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	switch (argc)
	{
	case 0:
		printf("argc=0",argc);
		break;
	case 1:
		printf("argc=%d",argc);
		break;
	case 6:
		printf("argc=%d",argc);
		break;
	case 7:
		printf("argc=%d",argc);
		break;
	case 9:
		printf("argc=%d",argc);
		break;
	default:
		printf("argc=%d,error!",argc);
	}

	return 0;
}

