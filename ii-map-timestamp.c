#include <stdio.h>
#include <time.h>

#define BUF_SIZE 1024

int
main()
{
	int    ts0;
	time_t ts;
	char buf_time[BUF_SIZE];
	char buf_rest[BUF_SIZE];
	struct tm *tm;

	while (scanf( "%d %[^\n]\n", &ts0, buf_rest) != EOF) {
		ts = (time_t) ts0;
		tm = localtime(&ts);
		strftime(buf_time, BUF_SIZE, "%Y-%m-%d--%H:%M:%S%z", tm);
		printf("%s %s\n", buf_time, buf_rest);
	}
	return 0;
}
