#include <stdio.h>

int main(void){
	int a,b;

	printf("1つ目の数字を入力してください：");
        scanf("%d", &a);

        printf("2つ目の数字を入力してください：");
        scanf("%d", &b);

        printf("合計は%dです。\n", a + b);

        return 0;
}
