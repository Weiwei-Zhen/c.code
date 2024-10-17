#define _CRT_SECURE_NO_WARNINGS
//                          第三讲 分支和循环
# include <stdio.h>
int main()
{
	//                                     1. if语句
	
	//int num = 0;
	//scanf("%d", &num);
	//if (num % 2 == 1)   //if语句后不加；
	//	printf("%d 是奇数\n", num);
	//else
	//	printf("%d 是偶数\n", num);

	////如果if后面有多条语句，要用大括号括起来

	//int age = 0;
	//scanf("%d", &age);
	//if (age >= 18)
	//{
	//	printf("成年了\n");
	//	printf("可以去网吧了\n");
	//}
	//else
	//{
	//	printf("未成年\n");
	//	printf("只能用临时卡喽\n");
	//}

	//                                         嵌套if
	
	//int num = 0;
	//scanf("%d",&num);
	//if (num > 0)
	//{
	//	if (num % 2 == 1)
	//		printf("%d是奇数\n", num);
	//	else
	//		printf("%d是偶数\n", num);
	//}
	//else
	//	printf("%d是负数\n", num);

	//                                         还可以使用else if
	
	//int num = 0;
	//scanf("%d", &num);
	//if (num == 0)
	//	printf("输⼊的数字是0\n");
	//else if (num > 0) //这⾥的if 相当于嵌套在els语句中，形成了嵌套结构
	//	printf("输⼊的数字是正数\n");
	//else
	//	printf("输⼊的数字是负数\n");


	//                                     悬空else问题
	//如果有多个 if 和 else ，可以记住这样⼀条规则， else 总是跟最接近的 if 匹配。


	//                                     2.关系操作符

	//> ⼤于运算符
	//< ⼩于运算符
	//>= ⼤于等于运算符
	//<= ⼩于等于运算符
	//== 相等运算符
	//!= 不相等运算符
	
	//int a = 0;
	//scanf("%d", &a);
	//if (a == 15) //如果不⼩⼼写成 x = 3 。这个式⼦表⽰对变量 x 赋值 3 ，它的返回值为 3 ，所以 if 判断总是为真。
	//	printf("xx");//所以有时候会用15==a的形式来防止写错
	//else
	//	printf("yy");

	//                             多个关系运算符不宜连⽤
	//  i < j < k 应该写为i<j&&j<k


	//                             条件操作符（三目操作符）
	//exp1 ? exp2 : exp3
	//条件操作符的计算逻辑是：如果 exp1 为真， exp2 计算，计算的结果是整个表达式的结果；如果exp1 为假， exp3 计算，计算的结果是整个表达式的结果。

	//int a = 0;
	//int b = 0;
	//scanf("%d", &a);
	//b = (a > 5 ? 2 : 3);
	//printf("%d", b);

	//                           逻辑操作符 ！取反，&&并且，||或

	//例如 输⼊⼀个年份year，判断year是否是闰年
	//闰年判断的规则：
		//1. 能被4整除并且不能被100整除是闰年
		//2. 能被400整除是闰年
	//int year = 0;
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	//{
	//	printf("%d是闰年", year);
	//}
	//else
	//	printf("%d不是闰年", year);
	//if (year % 4 == 0 && year % 100 != 0)
	//{
	//	printf("%d是闰年", year);
	//}
	//else if (year % 400 == 0)
	//{
	//	printf("%d是闰年", year);
	//}
	//else
	//	printf("%d不是闰年", year);

	//                                       短路
	//int i = 0, a = 2, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	////i = a++||++b||d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);


	//                                        switch
	// switch(表达式)
	//  {case value1:statement
	//   case value2:statement
	//   default:statement

	 //   }
	//int num = 0;
	//scanf(" %d", &num);
	//switch (num % 3) //整形表达式
	//{
	//case 0://整型常量表达式
	//	printf("余数为0");
	//	break;//可以跳出switch语句
	//case 1:
	//	printf("余数为1");
	//	break;
	//case 2:
	//	printf("余数为2");
	//	break;
	//}
	
	//                                          练习
	//int num = 0;
	//scanf("%d", &num);
	//if (0 < num && num < 8)
	//{
	//	switch (num)
	//	{
	//	case 1:
	//		printf("星期一");
	//		break;
	//	case 2:
	//		printf("星期二");
	//		break;
	//	case 3:
	//		printf("星期三");
	//		break;
	//	case 4:
	//		printf("星期四");
	//		break;
	//	case 5:
	//		printf("星期五");
	//		break;
	//	case 6:
	//		printf("星期六");
	//		break;
	//	case 7:
	//		printf("星期天");
	//		break;
	//	}
	//}
	//else
	//	printf("输入错误，请输入1-7的整数");
	//或者直接里面用 default:
                        //printf("输入错误");


	//如果需求发⽣变化，变为：
	//1. 输⼊1 - 5，输出的是“⼯作⽇”;
	//2. 输⼊6 - 7，输出“休息⽇”
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//	case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//		printf("⼯作⽇\n");
	//		break;
	//	case 6:
	//	case 7:
	//		printf("休息⽇\n");
	//		break;
	//}
	
	//                                           while循环
	//会一直循环
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("%d",i);
	//	i = i + 1;
	//}
	
	//倒着打1234
	//int a = 1234;//初始化
	//while (a) //条件判断
	//{
	//	printf("%d", a % 10);
	//	a /= 10; //用于循环变量的调整
	//	}

	//                               for循环
	
	//for (表达式1; 表达式2; 表达式3)
	//表达式1 ⽤于循环变量的初始化
	//表达式2 ⽤于循环结束条件的判断
	//表达式3 ⽤于循环变量的调整
	
	//int a = 0;
	//for (a = 1; a <= 10; ++a)
	//{
	//	printf("%d ", a);
	//}

	//计算1-100之间3的倍数的数字之和
	int a = 0;
	int sum = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0);
			sum = sum + a;

	}
	printf("%d",sum);
	return 0;
	

	











}



