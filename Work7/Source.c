#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	//1
	char c;
	printf("������� ������: ");
	scanf("%c", &c);
	switch (c)
	{
	    case 'a':
			printf("��� �����: 'a'. \n");
			break;
		case 'b':
			printf("��� �����: 'b'. \n");
			break;
		case 'c':
			printf("��� �����: 'c'. \n");
			break;
		case 'd':
			printf("��� �����: 'd'. \n");
			break;
		case 'e':
			printf("��� �����: 'e'. \n");
			break;
		case 'f':
			printf("��� �����: 'f'. \n");
			break;
		case 'g':
			printf("��� �����: 'g'. \n");
			break;
		case 'h':
			printf("��� �����: 'h'. \n");
			break;
		case 'i':
			printf("��� �����: 'i'. \n");
			break;
		case 'j':
			printf("��� �����: 'j'. \n");
			break;
		case 'k':
			printf("��� �����: 'k'. \n");
			break;
		case 'l':
			printf("��� �����: 'l'. \n");
			break; 
		case 'm':
			printf("��� �����: 'm'. \n");
			break;
		case 'n':
			printf("��� �����: 'n'. \n");
			break;
		case 'o':
			printf("��� �����: 'o'. \n");
			break;
		case 'p':
			printf("��� �����: 'p'. \n");
			break;
		case 'q':
			printf("��� �����: 'q'. \n");
			break;
		case 'r':
			printf("��� �����: 'r'. \n");
			break;
		case 's':
			printf("��� �����: 's'. \n");
			break;
		case 't':
			printf("��� �����: 't'. \n");
			break;
		case 'u':
			printf("��� �����: 'u'. \n");
			break;
		case 'v':
			printf("��� �����: 'v'. \n");
			break;
		case 'w':
			printf("��� �����: 'w'. \n");
			break;
		case 'x':
			printf("��� �����: 'x'. \n");
			break;
		case 'y':
			printf("��� �����: 'y'. \n");
			break;
		case 'z':
			printf("��� �����: 'z'. \n");
			break;
		case '0':
			printf("��� �����: '0'. \n");
			break;
		case '1':
			printf("��� �����: '1'. \n");
			break;
		case '2':
			printf("��� �����: '2'. \n");
			break;
		case '3':
			printf("��� �����: '3'. \n");
			break;
		case '4':
			printf("��� �����: '4'. \n");
			break;
		case '5':
			printf("��� �����: '5'. \n");
			break;
		case '6':
			printf("��� �����: '6'. \n");
			break;
		case '7':
			printf("��� �����: '7'. \n");
			break;
		case '8':
			printf("��� �����: '8'. \n");
			break;
		case '9':
			printf("��� �����: '9'. \n");
			break;
			
		default:
			printf("����������� ������\n");
	}

	//2

	float x, y;
	char c1;
	puts("������� �������� x, ��������, ������� ������ ���������(+, -, /, *, ^) � �������� y:\n");
	scanf_s("%f\n %c\n %f", &x, &c1, &y);
	switch (c1)
	{
		case '+':
			printf("�������� ������� ���������� �����: %f", x + y);
			break;
		case '-':
			printf("�������� ������� ���������� �����: %f", x - y);
			break;
		case '/':
			printf("�������� ������� ���������� �����: %f", x / y);
			break;
		case '*':
			printf("�������� ������� ���������� �����: %f", x * y);
			break;
		case '^':
			printf("�������� ������� ���������� �����: %f", pow(x, y));
			break;
		default:
			puts("������");
	}
	return 0;
}