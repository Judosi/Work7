#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	//1
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);
	switch (c)
	{
	    case 'a':
			printf("Это буква: 'a'. \n");
			break;
		case 'b':
			printf("Это буква: 'b'. \n");
			break;
		case 'c':
			printf("Это буква: 'c'. \n");
			break;
		case 'd':
			printf("Это буква: 'd'. \n");
			break;
		case 'e':
			printf("Это буква: 'e'. \n");
			break;
		case 'f':
			printf("Это буква: 'f'. \n");
			break;
		case 'g':
			printf("Это буква: 'g'. \n");
			break;
		case 'h':
			printf("Это буква: 'h'. \n");
			break;
		case 'i':
			printf("Это буква: 'i'. \n");
			break;
		case 'j':
			printf("Это буква: 'j'. \n");
			break;
		case 'k':
			printf("Это буква: 'k'. \n");
			break;
		case 'l':
			printf("Это буква: 'l'. \n");
			break; 
		case 'm':
			printf("Это буква: 'm'. \n");
			break;
		case 'n':
			printf("Это буква: 'n'. \n");
			break;
		case 'o':
			printf("Это буква: 'o'. \n");
			break;
		case 'p':
			printf("Это буква: 'p'. \n");
			break;
		case 'q':
			printf("Это буква: 'q'. \n");
			break;
		case 'r':
			printf("Это буква: 'r'. \n");
			break;
		case 's':
			printf("Это буква: 's'. \n");
			break;
		case 't':
			printf("Это буква: 't'. \n");
			break;
		case 'u':
			printf("Это буква: 'u'. \n");
			break;
		case 'v':
			printf("Это буква: 'v'. \n");
			break;
		case 'w':
			printf("Это буква: 'w'. \n");
			break;
		case 'x':
			printf("Это буква: 'x'. \n");
			break;
		case 'y':
			printf("Это буква: 'y'. \n");
			break;
		case 'z':
			printf("Это буква: 'z'. \n");
			break;
		case '0':
			printf("Это цифра: '0'. \n");
			break;
		case '1':
			printf("Это цифра: '1'. \n");
			break;
		case '2':
			printf("Это цифра: '2'. \n");
			break;
		case '3':
			printf("Это цифра: '3'. \n");
			break;
		case '4':
			printf("Это цифра: '4'. \n");
			break;
		case '5':
			printf("Это цифра: '5'. \n");
			break;
		case '6':
			printf("Это цифра: '6'. \n");
			break;
		case '7':
			printf("Это цифра: '7'. \n");
			break;
		case '8':
			printf("Это цифра: '8'. \n");
			break;
		case '9':
			printf("Это цифра: '9'. \n");
			break;
			
		default:
			printf("Неизвестный символ\n");
	}

	//2

	float x, y;
	char c1;
	puts("Введите значение x, операцию, которую хотите совершить(+, -, /, *, ^) и значение y:\n");
	scanf_s("%f\n %c\n %f", &x, &c1, &y);
	switch (c1)
	{
		case '+':
			printf("Итоговое значние вычеслений равно: %f", x + y);
			break;
		case '-':
			printf("Итоговое значние вычеслений равно: %f", x - y);
			break;
		case '/':
			printf("Итоговое значние вычеслений равно: %f", x / y);
			break;
		case '*':
			printf("Итоговое значние вычеслений равно: %f", x * y);
			break;
		case '^':
			printf("Итоговое значние вычеслений равно: %f", pow(x, y));
			break;
		default:
			puts("Ошибка");
	}
	return 0;
}