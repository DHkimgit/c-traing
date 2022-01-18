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

	printf("동물의 이름을 입력하세요 : ");
	scanf("%s", &s->name);
	printf("동물의 나이를 입력하세요 : ");
	scanf("%d", &s->age);
	printf("동물의 건강정도를 입력하세요(1~3 = 나쁨~좋음) : ");
	scanf("%d", &s->health);
	printf("동물의 배부른 정도를 입력하세요(1~3 = 배고픔~배부름) : ");
	scanf("%d", &s->food);
	printf("동물의 깨끗한 정도를 입력하세요(1~3 = 더러움~깨끗함) : ");
	scanf("%d", &s->clean);
}

void play(int i) {
	srand(time(NULL));
	list[i].health = (rand() % 3) + 1;
	list[i].food = (rand() % 3) + 1;
	list[i].clean = (rand() % 3) + 1;
}

void show_stat(struct Animal* s) {
	printf("이름 : %s\n", s->name);
	printf("나이 : %d\n", s->age);
	printf("건강 정도 : ");
	switch (s->health) {
		case 1:
			printf("나쁨\n");
			break;
		case 2:
			printf("보통\n"); 
			break;
		case 3:
			printf("좋음\n");
			break;
	}
	printf("배부른 정도 : ");
	switch (s->food) {
	case 1:
		printf("배고픔\n");
		break;
	case 2:
		printf("보통\n");
		break;
	case 3:
		printf("배부름\n");
		break;
	}
	printf("깨끗한 정도 : ");
	switch (s->clean) {
	case 1:
		printf("더러움\n");
		break;
	case 2:
		printf("보통\n");
		break;
	case 3:
		printf("깨끗함\n");
		break;
	}
}

int main(void) {
	int menu_num = 0;
	int animal_num = 1;
	int turn = 1;
	printf("========마이펫========\n");
	printf("1. 새로운 동물 추가\n");
	printf("2. 동물 스텟 보기\n");
	printf("3. 프로그램 종료\n");
	printf("======================\n");
	while (1) {
		printf("현재 %d번째 턴입니다.", turn);
		printf("원하시는 메뉴의 숫자를 입력하세요 : ");
		scanf("%d", &menu_num);
		if (menu_num == 3)
			break;
		switch (menu_num) {
			case 1:
				create_animal(&list[turn-1]);
				turn++;
				break;
			case 2:
				printf("몇번째 동물의 스텟을 보시겠습니까 : ");
				scanf("%d", &animal_num);
				show_stat(&list[animal_num-1]);
				break;
		}
	}
}