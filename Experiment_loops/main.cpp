#include<iostream>
using namespace std;

//#define LESSON_3_T_1
void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef LESSON_3_T_1

	char a = ' '; int i = 0; int b = 0; int c = 0;
	cout << "������� ������: "; cin >> a;
	cout << "������� ���������� ��������: "; cin >> i;
	cout << "���� �������� - 1 / ���� ��������� - 2:  "; cin >> c;
	do
	{
		b++;
		if (c == 1)cout << a;
		if (c == 2)cout << a << "\n";
	} while (b <= i);
#endif // LESSON_3_T_1

	int a = 0, sum = 0, b; 
	cout << "������� ��� �����,������� ���������:   "; cin >> a >> b;
	while (a <= b)
	{
		a++;
		if (a % 2 != 0)
		{
			cout << a << " "<<"\t";
			sum += a;
		}
	}
	cout <<"�����: "<< sum << " ";







}
