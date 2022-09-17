#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	//Begin8◦	.Даны два числа a и b.Найти их среднее арифметическое : (a + b) / 2.
	/*int a = 1;
	int b = 2;
	double avg = (a + b) / 2.0;
	std::cout << avg;*/
	//Begin9◦	.Даны два неотрицательных числа a и b.Найти их среднее геометрическое, то есть квадратный корень из их произведения : √	a·b.
	/*int a = 2;
	int b = 3;
	 double g_awg = sqrt(a * b);
	 std::cout << g_awg;*/
	// Begin10◦. Даны два ненулевых числа.Найти сумму, разность, произведение и	частное их квадратов.
	/*int a = 7;
	int b = 5;
	int Z = (a * b) + (a * b);
	int X = (a * b) - (a * b);
	int C = (a * b) * (a * b);
	double V(a * b) / (a * b);
	std::cout << Z;
	std::cout << X;
	std::cout << C;
	std::cout << V;*/
	//Begin11◦.Даны два ненулевых числа.Найти сумму, разность, произведение ичастное их модулей.
	/*int a, b;
	std::cin >> a >> b;
	int res;
	res = abs(a) + abs(b);
	std::cout << "Сумма модулей = " << res << std::endl;
	double res1 = abs(a) / abs(b);
	std::cout << "Частное модулей = " << res1 << std::endl;*/
	//Begin12◦	.Даны катеты прямоугольного треугольника a и b.Найти его гипотенузу c и периметр P :c =	√	a	2 + b	2	, P = a + b + c.
	/*int a = 2;
	int b = 8;
	double g_avg = sqrt(a * a + b * b);
	cout << g_avg;*/
	//Begin13◦	.Даны два круга с общим центром и радиусами R1 и R2(R1 > R2).	Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний	радиус которого равен R1, а внутренний радиус равен R2 :S1 = π·(R1)	2, S2 = π·(R2)2, S3 = S1 − S2.
	/*int R_1 = 7;
	int R_2 = 5;
	double pi = 3.14;
	double S_1 = 3.14 * (7 * 7);
	double S_2 = 3.14 * (5 * 5);
	double S_3 = S_1 - S_2;
	cout << S_1<<endl;
	cout << S_2<<endl;
	cout << S_3<<endl;*/
	//Begin14◦.Дана длина L окружности.Найти ее радиус R и площадь S круга,ограниченного этой окружностью, учитывая, что L = 2·π·R, S = π·R2.Вкачестве значения π использовать 3.14.
	/*double pi = 3.14;
	int R = 4;
	double L = 2 * 3.14 * 4;
	double S = 3.14 * 4 * 4;
	cout << L << endl;
	cout << S << endl;*/
	//Begin15◦.Дана площадь S круга.Найти его диаметр D и длину L окружности,ограничивающей этот круг, учитывая, что L = 2·π·R, S = π·R2.В качествезначения π использовать 3.14.
	/*double pi = 3.14;
	int R = 4;
	double L = 2 * 3.14 * 4;
	double S = 3.14 * 4 * 4;
	int D = 4 * 4;
	cout << L << endl;
	cout << S << endl;
	cout << D << endl;*/
	//Begin16◦.Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси : | x2 − x1 |
	/*int X_1, X_2;
	std::cin >> X_1 >> X_2;
	int res;
	res = abs(X_1) + abs(X_2);
	cout << "Разность модулей = " << res <<endl;*/
	//Begin17◦.Даны три точки A, B, C на числовой оси.Найти длины отрезков ACи BC и их сумму.
	int A, B, C;
	std::cin >> A >> B >> C ;
	int res;
	res = abs(C) + abs(B);
	res = abs(A) + abs(C);
	res = abs(A + C) + abs(B + C);
	cout << "Сумма отрезка CB = " << res << endl;
	cout << "Сумма отрезка AC = " << res << endl;
	cout << "Суммы отрезков = " << res << endl;




	




}