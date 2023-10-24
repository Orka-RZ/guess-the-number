#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

int main()
{
	int a, b, sum, max;
	double ln;
	srand((unsigned)time(NULL));//利用系统时间来初始化系统随机数的种子值

	printf("请选择你少女祈祷的范围：\n");
	scanf("%d", &max);
	a = rand() % max;//用取余来代替范围

	ln = log(max);
	sum = ln / log(2) + 1;
	printf("只有%d次祈祷的机会哦~\n",sum);

	while (1)
	{
		sum--;

		scanf("%d", &b);
		if (sum != 0) {
			if (b > a)
				printf("太大了哟~大叔只有%d次机会了哦~\n", sum);
			if (b < a)
				printf("我说大叔猜的也太小了吧~只剩%d次机会哦\n", sum);
			if (b == a)
			{
			printf("欸嘿~大叔还挺厉害的嘛~ \n");
			break;
			}
		}
		if (sum == 0)
		{
			printf("呐呐~大叔真是弱诶~明明就是%d嘛~杂鱼~杂鱼~",a);
			MessageBoxA(NULL, "您的身份已更改为：杂鱼", "少女祈祷失败！", MB_OK|MB_ICONWARNING);

			break;
		}
	}
	return 0;
}