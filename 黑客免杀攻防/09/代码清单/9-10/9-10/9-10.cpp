/*
*  《黑客免杀攻防》例子代码
*
*  作    者：任晓珲（A1Pass）
*  日    期：2010-01-05
*  本书官网：http://book.hackav.com  或 http://www.hzbook.com
*  作者微博：http://weibo.com/a1pass 或 http://t.qq.com/a1pass
*  作者博客：http://a1pass.blog.163.com
*/
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	if (argc>0)
	{
		if (argc == 1)
			printf("Hello!\r\n"); 
		else
			printf("Hello everybody!\r\n");
	}
	else
	{
		if (argc == 1)
			printf("World!\r\n"); 
		else
			printf("Hello everybody!\r\n");
	}

	return 0;
}

