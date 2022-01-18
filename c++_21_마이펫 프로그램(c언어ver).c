#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Animal {
	char name[30];
	int age;
	int health;
	int food;
	int clean;
};

struct Animal list[30];

void create_animal(struct Animal *s) {

	printf("������ �̸��� �Է��ϼ��� : ");
	scanf("%s", &s->name);
	printf("������ ���̸� �Է��ϼ��� : ");
	scanf("%d", &s->age);
	printf("������ �ǰ������� �Է��ϼ���(1~3 = ����~����) : ");
	scanf("%d", &s->health);
	printf("������ ��θ� ������ �Է��ϼ���(1~3 = �����~��θ�) : ");
	scanf("%d", &s->food);
	printf("������ ������ ������ �Է��ϼ���(1~3 = ������~������) : ");
	scanf("%d", &s->clean);
}

void play(int i) {
	srand(time(NULL));
	list[i].health = (rand() % 3) + 1;
	list[i].food = (rand() % 3) + 1;
	list[i].clean = (rand() % 3) + 1;
}

void show_stat(struct Animal* s) {
	printf("�̸� : %s\n", s->name);
	printf("���� : %d\n", s->age);
	printf("�ǰ� ���� : ");
	switch (s->health) {
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("����\n"); 
			break;
		case 3:
			printf("����\n");
			break;
	}
	printf("��θ� ���� : ");
	switch (s->food) {
	case 1:
		printf("�����\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("��θ�\n");
		break;
	}
	printf("������ ���� : ");
	switch (s->clean) {
	case 1:
		printf("������\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("������\n");
		break;
	}
}

int main(void) {
	int menu_num = 0;
	int animal_num = 1;
	int turn = 1;
	printf("========������========\n");
	printf("1. ���ο� ���� �߰�\n");
	printf("2. ���� ���� ����\n");
	printf("3. ���α׷� ����\n");
	printf("======================\n");
	while (1) {
		printf("���� %d��° ���Դϴ�.", turn);
		printf("���Ͻô� �޴��� ���ڸ� �Է��ϼ��� : ");
		scanf("%d", &menu_num);
		if (menu_num == 3)
			break;
		switch (menu_num) {
			case 1:
				create_animal(&list[turn-1]);
				turn++;
				break;
			case 2:
				printf("���° ������ ������ ���ðڽ��ϱ� : ");
				scanf("%d", &animal_num);
				show_stat(&list[animal_num-1]);
				break;
		}
	}
}