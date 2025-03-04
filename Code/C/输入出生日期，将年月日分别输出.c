// 输入出生日期，将年月日分别输出
// 1990<=year<=2015,1<=month<=12,1<=day<=30
int main()
{
	int birth = 0;
	
	scanf("%d", &birth);//19900811

	printf("year=%d\nmonth=%d\nday=%d\n", birth / 10000, birth % 1000 / 100, birth % 10000%100);

	return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;

	scanf("%4d%2d%2d", &year, &month, &day);

	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	printf("day=%02d\n", day);

	return 0;
}