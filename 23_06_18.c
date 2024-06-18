#include <stdio.h>

/// <summary>
/// upload
/// </summary>

typedef union studentinfo {
	char reg_num[15];
	int std_num;

}std_info;

struct dob {
	int year;
	int month;
	int day;
};

typedef struct student{
	char name[20];
	int info_n;
	std_info info;
	struct dob* d;
}std;

int main(void) {

	std class[3];
	struct dob d3[3];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", class[i].name);
		printf("1. 주민등록번호  2.학번 중에 하나를 선택하시오: ");
		scanf("%d", &class[i].info_n);
		if (class[i].info_n == 1) {
			printf("주민등록번호를 입력하시오(000000-0000000): ");
			scanf("%s", class[i].info.reg_num);
		}
		else {
			printf("학번을 입력하시오: ");
			scanf("%d", &class[i].info.std_num);
		}

	
		printf("생년월일을 입력하시오(0000 00 00): ");
		scanf("%d %d %d", &d3[i].year, &d3[i].month, &d3[i].day);

		class[i].d = &d3[i];
	}


	for (int i = 0; i < 3; i++) {
		printf("%d 이름: %s ", i + 1, class[i].name);
		if (class[i].info_n == 1) {
			printf("주민등록번호: %s ", class[i].info.reg_num);
		}
		else {
			printf("학번: %d ", class[i].info.std_num);
		}
		printf("생년월일: %d년 %d월 %d일\n", class[i].d->year, class[i].d->month, class[i].d->day);
	}
}