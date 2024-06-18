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
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", class[i].name);
		printf("1. �ֹε�Ϲ�ȣ  2.�й� �߿� �ϳ��� �����Ͻÿ�: ");
		scanf("%d", &class[i].info_n);
		if (class[i].info_n == 1) {
			printf("�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�(000000-0000000): ");
			scanf("%s", class[i].info.reg_num);
		}
		else {
			printf("�й��� �Է��Ͻÿ�: ");
			scanf("%d", &class[i].info.std_num);
		}

	
		printf("��������� �Է��Ͻÿ�(0000 00 00): ");
		scanf("%d %d %d", &d3[i].year, &d3[i].month, &d3[i].day);

		class[i].d = &d3[i];
	}


	for (int i = 0; i < 3; i++) {
		printf("%d �̸�: %s ", i + 1, class[i].name);
		if (class[i].info_n == 1) {
			printf("�ֹε�Ϲ�ȣ: %s ", class[i].info.reg_num);
		}
		else {
			printf("�й�: %d ", class[i].info.std_num);
		}
		printf("�������: %d�� %d�� %d��\n", class[i].d->year, class[i].d->month, class[i].d->day);
	}
}