#include<iostream>
#include<conio.h>

using namespace std;
using  std::cout;
using  std::cin;

//#define FACTION
//#define SIZEOF
//#define VAR
//#define TASK ON DATA TYPES
//#define KALCULYTOR
//#define TASK
//#define CALCULYTOR
//#define CALC_SWICH
//#define EVEN_NUMBER
//#define ODD_NUMBER
//#define NATUR_NUMBER
//#define BOOL_TASK_1
//#define BOOL_TASK_2
//#define BOOL_TASK_3
//#define BOOL_TASK_4
//#define BOOL_TASK_5
//#define IF_TASK_1
//#define IF_TASK_2
//#define IF_TASK_3
//#define IF_TASK_4
//#define IF_TASK_5
//#define IF_TASK_6
//#define IF_TASK_7
//#define IF_TASK_8
//#define IF_TASK_9
//#define IF_TASK_10
//#define IF_TASK_11
//#define IF_TASK_12
//#define IF_TASK_13
//#define IF_TASK_14
//#define IF_TASK_16
//#define IF_TASK_17
//#define IF_TASK_18
//#define IF_TASK_19
//#define IF_TASK_20
//#define CASE_1
//#define CASE_2
//#define CASE_3
//#define CASE_4
//#define CASE_5
//#define CASE_6
//#define FOR_W_1
//#define FOR_1
//#define FOR_2
//#define FOR_3
//#define FOR_4
//#define FOR_4.1
//#define FOR_5
//#define FOR_6
//#define FOR_7
//#define FOR_8




void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef FANCTION

	void Hello()
	{
		cout << "Hello,World!!!\n\n";
	}
	//nn
	int main()
	{
		Hello();
		Hello();
		Hello();
		return 0;
	}


#endif // FANCTION

#ifdef SIZEOF
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << UINT_MAX << endl;

	cout << sizeof(long) << endl;
	cout << LONG_MIN << "..." << ULONG_MAX << endl;

	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << "..." << ULLONG_MAX << endl;

	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << USHRT_MAX << endl;

#endif // SIZEOF

#ifdef VAR
	int a = 2; int b = 3;
	cout << a << "\t" << b << endl;
	int c = a;
	a = b; b = c;
	cout << a << "\t" << b << endl;

#endif // VAR

#ifdef TASK ON DATA TYPES

	double price_not = 2.75;
	int note = 7;
	double price_pen = 0.85;
	int pen = 5;
	double cost = 15.45;
	double res = (price_not * note) + (price_pen * pen);
	cout << (int)res << "\t" << "руб";
#endif // TASK ON DATA TYPES

#ifdef CONVER_SION
	double digit;
	cout << "Введите дробное число: "; cin >> digit;
	int many = digit;
	//cout << many << "руб";
	int cop = (digit - many) * 100;
	cout << many << "руб" << "\t" << cop << "коп";
#endif // CONVER_SION

#ifdef TASK
	double pr_not, pr_pen;
	int quan_not, quan_pen;
	cout << "Цена тетради: "; cin >> pr_not;
	cout << "Количество тетрадей: "; cin >> quan_not;
	cout << "Цена карандашей: "; cin >> pr_pen;
	cout << "Количество карандашей: "; cin >> quan_pen;
	double res = (pr_not * quan_not) + (pr_pen * quan_pen);
	int many = res;
	int cop = (res - many) * 100;
	cout << "Стоимость покупки: " << many << "руб" << " " << cop << "коп";
#endif // TASK

#ifdef KALCULYTOR
	int a, b, res;

	cout << "Введите выражение: "; cin >> a >> b;
	res = a + b;
	cout << res;

#endif // KALCULYTOR

#ifdef CALCULYTOR

	double a, b;
	char s;
	cout << "Введите значения выражения: "; cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error :No operatoun!" << endl;
	}

#endif // CALCULYTOR

#ifdef CALC_SWICH
	double a, b, result;
	char s;
	cout << "Введите значение выражения: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':result = a + b; cout << a << "+" << b << "=" << result << endl; break;
	case '-':result = a - b; cout << a << "-" << b << "=" << result << endl; break;
	case '*':result = a * b; cout << a << "*" << b << "=" << result << endl; break;
	case '/':result = a / b; cout << a << "/" << b << "=" << result << endl; break;

	}
#endif // CALC_SWICH

#ifdef EVEN_NUMBER
	int a;
	cout << "Введите число: "; cin >> a;
	if (a % 2 == 0)
	{
		cout << a << " " << "четное число.";
	}
	if (a % 2 != 0)
	{
		cout << a << " " << "нечетное число.";
	}
#endif // EVEN_NUMBER

#ifdef ODD_NUMBER

	int a;
	cout << "Введите число: "; cin >> a;
	(a % 2 == 0) ? cout << a << " " << "четное число." : cout << a << " " << "нечетное число.";
#endif // ODD_NUMBER

#ifdef NATUR_NUMBER
	int a = 0, quant = 0, sum = 0;
	cout << "Введите натуральное число от 0 до 100: "; cin >> a;
	while (quant <= a)
	{
		cout << quant++ << "\t";
		int b = +quant; cout << b;


	}


#endif // NATUR_NUMBER

#ifdef BOOL_TASK_1
	int a;
	cout << "Введите целое число: "; cin >> a;
	(a >= 0) ? cout << true << " " << "Положительное" : cout << false << " " << "Отрицательное";

#endif // BOOL_TASK_1

#ifdef B00L_TASK_2
	int a;
	cout << "Введите целое число: "; cin >> a;
	(a % 2 != 0) ? cout << true << " " << "четное" : cout << false << " " << "нечетное";

#endif // B00L_TASK_2

#ifdef BOOL_TASK_3
	int a;
	cout << "Введите целое число: "; cin >> a;
	(a % 2 == 0) ? cout << true << " " << "четное" : cout << false << " " << "нечетное";

#endif // BOOL_TASK_3

#ifdef BOOL_TASK_4
	int A, B;
	cout << "Введите два целых числа для сравнения: " << endl; cin >> A; cin >> B;
	(A > 2 && B <= 3) ? cout << true : cout << false;

#endif // BOOL_TASK_4

#ifdef BOOL_TASK_5

	int A, B;
	cout << "Введите два числа для сравнения:A >= 0 || B < -2 " << endl; cin >> A; cin >> B;
	(A >= 0 || B < -2) ? cout << true : cout << false;

#endif // BOOL_TASK_5

#ifdef IF_TASK_1
	int a;
	cout << "Введите целое число: "; cin >> a;
	if (a > 0)
	{
		int res = a - 8; cout << res;
	}
	else if (a < 0)
	{
		cout << a;
	}

#endif // IF_TASK_1

#ifdef IF_TASK_2

	int a, res = 0;
	cout << "Введите целое число: "; cin >> a;
	if (a > 0)
	{
		int res = a - 8; cout << res;
	}
	else if (a < 0)
	{
		res = a + 6; cout << res;
	}
#endif // IF_TASK_2

#ifdef IF_TASK_3

	int a, res = 0;
	cout << "Введите целое число: "; cin >> a;
	if (a > 0)
	{
		res = a - 8; cout << res;
	}
	else if (a < 0)
	{
		res = a + 6; cout << res;
	}
	else if (a == 0)
	{
		res = a += 10; cout << res;
	}
#endif // IF_TASK_3

#ifdef IF_TASK_4
	int a, b, c, res = 0;
	cout << "Введите три целых числа: "; cin >> a >> b >> c;
	if (a > 0)
	{
		res += 1;
	}
	if (b > 0)
	{
		res += 1;
	}
	if (c > 0)
	{
		res += 1;
	}
	cout << "Количество положительных чисел: " << res;
#endif // IF_TASK_4

#ifdef IF_TASK_5
	int a, b, c, res = 0, result = 0;
	cout << "Введите три целых числа: "; cin >> a >> b >> c;
	(a > 0) ? res += 1 : result += 1;
	(b > 0) ? res += 1 : result += 1;
	(c > 0) ? res += 1 : result += 1;
	cout << "Положительных чисел: " << res << endl;
	cout << "Отрицaтельных чисел: " << result << endl;
#endif // IF_TASK_5

#ifdef IF_TASK_6
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	(a > b) ? cout << a : cout << b;
#endif // IF_TASK_6

#ifdef IF_TASK_7
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	(a < b) ? cout << 1 : cout << 2;
#endif // IF_TASK_7

#ifdef IF_TASK_8
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	(a > b) ? cout << a << " " << b : cout << b << " " << a;
#endif // IF_TASK_8

#ifdef IF_TASK_9
	double a, b;
	cout << "Введите два дробных числа: " << endl; cin >> a; cin >> b;
	if (a < b)
	{
		cout << a << " " << b;
	}
	else if (a > b)
	{
		double c = a; a = b; b = c;
		cout << a << " " << b;
	}
#endif // IF_TASK_9

#ifdef IF_TASK_10

	int a, b;
	cout << "Введите два числа : " << endl; cin >> a; cin >> b;
	if (a != b)
	{
		a = b = a + b;
		cout << a << " " << b;
	}
	else if (a == b)
	{
		a = b = 0; cout << a << " " << b;
	}
#endif // IF_TASK_10

#ifdef IF_TASK_11
	int a, b;
	cout << "Введите два числа: " << endl; cin >> a >> b;
	if (a != b && a > b)
	{
		b = a; cout << a << " " << b;
	}
	else if (a != b && a < b)
	{
		a = b; cout << a << " " << b;
	}
	else if (a == b)
	{
		a = b = 0; cout << a << " " << b;
	}
#endif // IF_TASK_11

#ifdef IF_TASK_12
	int a, b, c;
	cout << "Введитe три числа: " << endl;
	cin >> a >> b >> c;
	if (a < b && a < c)
	{
		cout << a;
	}
	else if (b < a && b < c)
	{
		cout << b;
	}
	else if (c < a && c < b)
	{
		cout << c;
	}
#endif // IF_TASK_12

#ifdef IF_TASK_13
	int a, b, c;
	cout << "Введитe три числа: " << endl;
	cin >> a >> b >> c;
	if (a < b && b < c)
	{
		cout << b;
	}
	else if (b < a && a < c)
	{
		cout << a;
	}
	else if (a < c && c < b)
	{
		cout << c;
	}
#endif // IF_TASK_13

#ifdef IF_TASK_14
	int a, b, c, max = 0, min = 0;
	cout << "Введитe три числа: " << endl;
	cin >> a >> b >> c;
	if (a < b && a < c)min = a;
	else if (b < a && b < c)min = b;
	else min = c;

	if (a > b && a > c)max = a;
	else if (b > a && b > c)max = b;
	else max = c;

	cout << "наименьшее: " << min << " " << "наибольшее: " << max;

#endif // IF_TASK_14

#ifdef IF_TASK_16
	double a, b, c;
	cout << "Введите три числа: " << endl; cin >> a >> b >> c;
	if ((a <= b) && (b <= c))
	{
		a *= 2; b *= 2; c *= 2;
		cout << a << " " << b << " " << c;

	}
	else
	{
		a = a * (-1); b = b * (-1); c = c * (-1);
		cout << a << " " << b << " " << c;
	}

#endif // IF_TASK_16

#ifdef IF_TASK_17

	double a, b, c;
	cout << "Введите три числа: " << endl; cin >> a >> b >> c;
	if (((a <= b) && (b <= c)) || ((a >= b) && (b >= c)))
	{
		a *= 2; b *= 2; c *= 2;
		cout << a << " " << b << " " << c << endl;
	}
	else
	{
		a *= (-1);  b *= (-1);  c *= (-1);
		cout << a << " " << b << " " << c << endl;
	}
#endif // IF_TASK_17

#ifdef IF_TASK_18
	int a, b, c;
	cout << "Введите три числа: " << endl; cin >> a >> b >> c;
	if (b == c)
	{
		cout << a << " №" << 1 << endl;
	}
	else if (c == a)
	{
		cout << b << " №" << 2 << endl;
	}
	else if (b == a)
	{
		cout << c << " №" << 3 << endl;
	}
	/*else if(a == b == c)
	{
		cout << "eror";
	}*/


#endif // IF_TASK_18

#ifdef IF_TASK_19
	int a, b, c, d;
	cout << "Введите четыре целых числа: " << endl; cin >> a; cin >> b; cin >> c; cin >> d;
	if (a != b && a != c && a != d)
	{
		cout << "Отличное 1 число" << endl;
	}
	else if (b != a && b != d && b != c)
	{
		cout << "Отличное 2 число" << endl;
	}
	else if (c != a && c != b && c != d)
	{
		cout << "Отличное 3 число" << endl;
	}
	else
	{
		cout << "Отличное 4 число" << endl;
	}
#endif // IF_TASK_19

#ifdef IF_TASK_20

	int a, b, c, n = 0;
	cout << "Введите три точки на числовой оси: " << endl;
	cin >> a; cin >> b; cin >> c;
	if (b < c)
	{
		n = b - a;
		cout << "Точка b ближе к точке a на: " << n << endl;
	}
	else if (c < b)
	{
		n = c - a;
		cout << "Точка c ближе к точке a на: " << n << endl;
	}
#endif // IF_TASK_20

#ifdef CASE_1
	char a;
	cout << "Введите число от 1 до 7: "; cin >> a;
	switch (a)
	{
	case '1':cout << "Monday";    break;
	case '2':cout << "Tuesday";   break;
	case '3':cout << "Wednesday"; break;
	case '4':cout << "Thursday";  break;
	case '5':cout << "Friday";    break;
	case '6':cout << "Saturday";  break;
	case '7':cout << "Sunday";    break;
	}
#endif // CASE_1

#ifdef CASE_2

	char a = ' ';
	cout << "Введите число от 1 до 5: "; cin >> a;
	switch (a)
	{
	case'1':cout << "Плохо:";               break;
	case'2':cout << "Неудовлетворительно:"; break;
	case'3':cout << "Удовлетворительно:";   break;
	case'4':cout << "хорошо:";              break;
	case'5':cout << "Отлично:";             break;
	default: cout << "Ошибка";
	}
#endif // CASE_2

#ifdef CASE_3
	char a = ' ';
	cout << " Введите число от 1 до 12: "; cin >> a;
	switch (a)
	{
	case '1':cout << "зима";   break;
	case '2':cout << "зима";   break;
	case '3':cout << "весна";  break;
	case '4':cout << "весна";  break;
	case '5':cout << "весна";  break;
	case '6':cout << "лето";   break;
	case '7':cout << "лето";   break;
	case '8':cout << "лето";   break;
	case '9':cout << "осень";  break;
	case '10':cout << "осень"; break;
	case '11':cout << "осень"; break;
	case '12':cout << "осень"; break;

	}

#endif // CASE_3

#ifdef CASE_4
	char a;
	cout << "Введите номер месяца,1-12:  "; cin >> a;
	switch (a)
	{
	case '1':cout << "январь 31д";   break;
	case '2':cout << "февраль 28д";  break;
	case '3':cout << "март 31д";     break;
	case '4':cout << "апрель 30д";   break;
	case '5':cout << "май 31д";      break;
	case '6':cout << "июнь 30д";     break;
	case '7':cout << "июль 31д";     break;
	case '8':cout << "август 31д";   break;
	case '9':cout << "сентябрь 30д"; break;
	case '10':cout << "октябрь 31д";  break;
	case '11':cout << "ноябрь 30д";   break;
	case '12':cout << "декабрь 31д";  break;

	}

#endif // CASE_4

#ifdef CASE_5

	char n = ' ';
	double a, b;
	cout << "Введите два числа: " << endl; cin >> a >> b;
	cout << "Введите номер действия: 1'+'  2'-'  3'*'  4'/'  "; cin >> n;

	switch (n)
	{
	case '1':cout << a << '+' << b << '=' << a + b; break;
	case '2':cout << a << '-' << b << '=' << a - b; break;
	case '3':cout << a << '*' << b << '=' << a * b; break;
	case '4':cout << a << '/' << b << '=' << a / b; break;
	}
#endif // CASE_5

#ifdef CASE_6
	char n;
	double l;
	cout << "Введите длинну отрезка: "; cin >> l;
	cout << "Введите номер единицы длины: 1'дм' 2'км' 3'м' 4'мм' 5'см'	";
	cin >> n;
	switch (n)
	{
	case'1':cout << l / 10 << " " << "м"; break;
	case'2':cout << l * 1000 << " " << "м"; break;
	case'3':cout << l << " " << "м"; break;
	case'4':cout << l / 1000 << " " << "м"; break;
	case'5':cout << l / 100 << " " << "м"; break;
	}
#endif // CASE_6

#ifdef FOR_W_1

	int k, n, i = 0;
	cout << "введите первое число: "; cin >> k;
	cout << "введите второе число: "; cin >> n;
	while (i < n)
	{
		++i;
		cout << k << " ";
	}
#endif // FOR_W_1

#ifdef FOR_1
	int k, n;
	cout << "Введите два целых числа: " << endl;
	cout << "Введите первое число:	"; cin >> k;
	cout << "Введите второе число:	"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << k << " ";
	}

#endif // FOR_1

#ifdef FOR_2
	int a, b, n = 0;
	cout << "Введите целых числа (a<b):" << endl;
	cout << "Введите первое число:  "; cin >> a;
	cout << "Введите второе  число:  "; cin >> b;
	for (int i = a; i <= b; ++i)

		cout << i << " " << "\t";
	n = b - a + 1;; cout << "количество:  " << n;

#endif // FOR_2

#ifdef FOR_3
	int a, b, n, i = 0;
	cout << "Введите целых числа (a<b):" << endl;
	cout << "Введите первое число:  "; cin >> a;
	cout << "Введите второе  число:  "; cin >> b;

	for (i = b - 1; i > a; --i)
		cout << i << " " << "\t";
	n = b - a - 1;
	cout << "количество:  " << n;
#endif // FOR_3

#ifdef FOR_4
	double cost, weight, quant;
	cout << "Введите стоимость 1кг конфет: "; cin >> cost;
	cout << "Введите количество кг:  "; cin >> weight;
	for (int i = 1; i <= weight; i++)
		quant = cost * weight; cout << quant;

#endif // FOR_4

#ifdef FOR_4.1
	float c;
	cout << "Cost:";
	cin >> c;

	for (int i = 1; i <= 10; ++i)
		cout << i << " kg = " << c * i << endl;

#endif // FOR_4.1

#ifdef FOR_5
	double a; // цена  1 кг конфет
	float i;
	cout << "Введите стоимость 1кг:  "; cin >> a;
	for (i = 0.1; i < 1.1; i += 0.1)
	{
		cout << i << "кг = " << i * a << "\n";
	}

#endif // FOR_5

#ifdef FOR_6

	double a, i;
	cout << "Введите стоимость 1кг:  "; cin >> a;
	for (i = 1.2; i < 2; i += 0.2)
	{
		cout << i << "кг " << i * a << "\n";
	}
#endif // FOR_6

#ifdef FOR_7
	int a, b, sum, i; a = b = sum = i = 0;
	cout << "Введите два целых числа: (a<b) " << endl;
	cout << "Введите первое число: "; cin >> a;
	cout << "Введите второе число: "; cin >> b;
	for (i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << sum;
#endif // FOR_7

#ifdef FOR_8
	int a, b, i, work = 1;
	cout << " " << "a < b " << endl;
	cout << "Введите первое число: "; cin >> a;
	cout << "Введите второе число: "; cin >> b;
	for (i = a; i <= b; ++i)
	{
		work *= i;
	}
	cout << work;

#endif // FOR_8




	

}

