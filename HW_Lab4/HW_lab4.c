#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, k;
	printf("������� ����� �����\n");
	scanf_s("%f", &a);
	printf("������� ������ �����\n");
	scanf_s("%f", &b);
	printf("������� ��������� 1 ������ �����\n");
	scanf_s("%f", &k);
	float s = a * b;                         // ������� ����� ��� �����, a - �����, b - ������
	int s2 = 12;                          // s2 �������, ������� ������ ������� ���� ����� �����, ������ 12 �^2
	int n = s / s2 + 1;						// ���������� �������, ����������� ��� �������� ���� �����, ��� ����� ����� ������� ����� �� ������� ������ ����� � + 1 ���� ������� ������ �� ������� �� 12                           
	float c = n * k;						// ��� ������ ��� ��������� ����� ����� ���������� ������� �������� �� �� ���������
	printf("����� ��������� ����� ����� %f", c);

}