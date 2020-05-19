#include "Activities.h"
#include <iostream>
#include <ctime>
#include <typeinfo>
#include <algorithm>
#include <vector>
using namespace std;

MainActivity* CreateSomething(Factory *value) {
	return value->Create();
}

void Running::SetProg(Running* tr, int steps1, double km1, double speed1, double callorii1) {
	tr->steps += steps1;
	tr->km += km1;
	tr->speed += speed1;
	tr->callorii += callorii1;
}

void Running::SetProgress(Running *tr) {
	int count;
	while (1) {
		clock_t start = clock();

		cin >> count;
		if (count == 0) break;

		clock_t end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;

		if (sec < 3)
			SetProg(tr, 15, 0.012, 1, 1);
		if (sec >= 3 && sec <= 6)
			SetProg(tr, 11, 0.009, 0.5, 0.8);
		if (sec > 6 && sec < 10)
			SetProg(tr, 7, 0.005, -1, 0.5);
	}
}

void Walking::SetProg(Walking* tr, int steps1, double km1, double speed1, double callorii1) {
	tr->steps += steps1;
	tr->km += km1;
	tr->speed += speed1;
	tr->callorii += callorii1;
}

void Walking::SetProgress(Walking* tr) {
	int count;
	while (1) {
		clock_t start = clock();

		cin >> count;
		if (count == 0) break;

		clock_t end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;

		if (sec < 3)
			SetProg(tr, 8, 0.006, 0.8, 0.8);
		if (sec >= 3 && sec <= 6)
			SetProg(tr, 5, 0.003, 0.3, 0.5);
		if (sec > 6 && sec < 10)
			SetProg(tr, 2, 0.001, -0.8, 0.2);
	}
}

void Bicycle::SetProg(Bicycle* tr, double km1, double speed1, double callorii1) {
	tr->km += km1;
	tr->speed += speed1;
	tr->callorii += callorii1;
}

void Bicycle::SetProgress(Bicycle* tr) {
	int count;
	while (1) {
		clock_t start = clock();

		cin >> count;
		if (count == 0) break;

		clock_t end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;

		if (sec < 3)
			SetProg(tr, 0.03, 2, 1);
		if (sec >= 3 && sec <= 6)
			SetProg(tr, 0.02, 0.5, 0.7);
		if (sec > 6 && sec < 10)
			SetProg(tr, 0.01, -1, 0.4);
	}
}

void Swimming::SetProg(Swimming* tr, double km1, double speed1, double callorii1) {
	tr->km += km1;
	tr->speed += speed1;
	tr->callorii += callorii1;
}

void Swimming::SetProgress(Swimming* tr) {
	int count;
	while (1) {
		clock_t start = clock();

		cin >> count;
		if (count == 0) break;

		clock_t end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;

		if (sec < 3)
			SetProg(tr, 0.003, 0.5, 1);
		if (sec >= 3 && sec <= 6)
			SetProg(tr, 0.002, 0.3, 0.7);
		if (sec > 6 && sec < 10)
			SetProg(tr, 0.001, -0.5, 0.4);
	}
}

void ExerciseJym::SetProg(ExerciseJym *tr, int weight1, int repeat1, double callorii1) {
	tr->weight = (tr->weight + weight1)/2;
	tr->repeat += repeat1;
	tr->callorii += callorii1;
}

void ExerciseJym::SetProgress(ExerciseJym* tr) {
	int count;
	while (1) {
		clock_t start = clock();

		cin >> count;
		if (count == 0) break;

		clock_t end = clock();
		double sec = (double)(end - start) / CLOCKS_PER_SEC;

		if (sec < 3)
			SetProg(tr, 5, 1, 0.3);
		if (sec >= 3 && sec <= 6)
			SetProg(tr, 3, 1, 0.2);
		if (sec > 6 && sec < 10)
			SetProg(tr, 1, 1, 0.1);
	}
}

void Function::AddActivity(vector<MainActivity*> mainact, vector<Factory*> factory) {
	int day1, a1;
	cout << "Введите дату активности (число месяца)" << endl;
	cin >> day1;
	cout << "Выберите вид активности: 1.Бег  2.Ходьба  3.Велосипед  4.Плавание  5.Спортзал" << endl;
	cin >> a1;
	switch (a1) {
	case 1:
	{
		MainActivity* obj = CreateSomething(factory[0]);
		cout << "Подсчёт прогресса в тренировке начат. После окончания тренировки нажмите 0" << endl;
		obj->SetProgress(obj);
		cout << "Тренировку окончено" << endl;
		mainact.push_back(obj);
	}
	break;
	case 2:
	{
		MainActivity* obj = CreateSomething(factory[1]);
		cout << "Подсчёт прогресса в тренировке начат. После окончания тренировки нажмите 0" << endl;
		obj->SetProgress(obj);
		cout << "Тренировку окончено" << endl;
		mainact.push_back(obj);
	}
	break;
	case 3:
	{
		MainActivity* obj = CreateSomething(factory[2]);
		cout << "Подсчёт прогресса в тренировке начат. После окончания тренировки нажмите 0" << endl;
		obj->SetProgress(obj);
		cout << "Тренировку окончено" << endl;
		mainact.push_back(obj);
	}
	break;
	case 4:
	{
		MainActivity* obj = CreateSomething(factory[3]);
		cout << "Подсчёт прогресса в тренировке начат. После окончания тренировки нажмите 0" << endl;
		obj->SetProgress(obj);
		cout << "Тренировку окончено" << endl;
		mainact.push_back(obj);
	}
	break;
	case 5:
	{
		MainActivity* obj = CreateSomething(factory[4]);
		cout << "Подсчёт прогресса в тренировке начат. После окончания тренировки нажмите 0" << endl;
		obj->SetProgress(obj);
		cout << "Тренировку окончено" << endl;
		mainact.push_back(obj);
	}
	break;
	}
}

void Function::DataResult(vector<MainActivity*> mainact) {
	int day;
	cout << "Введите дату (день месяца) ";
	cin >> day;

	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(Running*)) {
			Running* running = dynamic_cast<Running*>(mainact[iter]);

			if (running->data == day) {
				cout << day << " число: Бег - калории - " << running->callorii << " расстояние - " << running->km << " средняя скорость - "
					<< running->speed << " шаги - " << running->steps << endl;
			}
		}
		if (typeid(mainact[iter]) == typeid(Walking*)) {
			Walking* walking = dynamic_cast<Walking*>(mainact[iter]);
		
			if (walking->data == day) {
				cout << day << " число: Ходьба - калории - " << walking->callorii << " расстояние - " << walking->km << " средняя скорость - "
					<< walking->speed << " шаги - " << walking->steps << endl;
			}
		}
		if (typeid(mainact[iter]) == typeid(Bicycle*)) {
			Bicycle* bicycle = dynamic_cast<Bicycle*>(mainact[iter]);
			if (bicycle->data == day) {
				cout << day << " число: Велосипед - калории - " << bicycle->callorii << " расстояние - " << bicycle->km << " средняя скорость - "
					<< bicycle->speed << endl;
			}
		}
		if (typeid(mainact[iter]) == typeid(Swimming*)) {
			Swimming* swimming = dynamic_cast<Swimming*>(mainact[iter]);
			if (swimming->data == day) {
				cout << day << " число: Плавание - калории - " << swimming->callorii << " расстояние - " << swimming->km << " средняя скорость - "
					<< swimming->speed << endl;
			}
		}
		if (typeid(mainact[iter]) == typeid(ExerciseJym*)) {
			ExerciseJym* exercisejym = dynamic_cast<ExerciseJym*>(mainact[iter]);
			if (exercisejym->data == day) {
				cout << day << " число: Спортзал - калории - " << exercisejym->callorii << " средний поднятый вес - "
					<< exercisejym->weight << " повторов - " << exercisejym->repeat << endl;
			}
		}
	}
}

void Function::GetMaxResult(vector<MainActivity*> mainact) {
	int a, b;
	double temp = 0;
	int daymax = 0;
	cout << "Выберите вид активности: 1.Бег  2.Ходьба  3.Велосипед  4.Плавание  5.Спортзал" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость  4-шаги " << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Running*)) {
					Running* p = dynamic_cast<Running*>(mainact[iter]);
					if (p->callorii > temp) {
						temp = p->callorii;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 2:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Running*)) {
					Running* p = dynamic_cast<Running*>(mainact[iter]);
					if (p->km > temp) {
						temp = p->km;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 3:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Running*)) {
					Running* p = dynamic_cast<Running*>(mainact[iter]);
					if (p->speed > temp) {
						temp = p->speed;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 4:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Running*)) {
					Running* p = dynamic_cast<Running*>(mainact[iter]);
					if (p->km > temp) {
						temp = p->km;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		default:
			break;
		}

	case 2:
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость  4-шаги " << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Walking*)) {
					Walking* p = dynamic_cast<Walking*>(mainact[iter]);
					if (p->callorii > temp) {
						temp = p->callorii;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 2:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Walking*)) {
					Walking* p = dynamic_cast<Walking*>(mainact[iter]);
					if (p->km > temp) {
						temp = p->km;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 3:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Walking*)) {
					Walking* p = dynamic_cast<Walking*>(mainact[iter]);
					if (p->speed > temp) {
						temp = p->speed;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		case 4:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Walking*)) {
					Walking* p = dynamic_cast<Walking*>(mainact[iter]);
					if (p->steps > temp) {
						temp = p->steps;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
		default:
			break;
		}
		break;
	case 3:
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость  " << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Bicycle*)) {
					Bicycle* p = dynamic_cast<Bicycle*>(mainact[iter]);
					if (p->callorii > temp) {
						temp = p->callorii;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << "  " << daymax << " числа" << endl;
			break;
			break;
		case 2:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Bicycle*)) {
					Bicycle* p = dynamic_cast<Bicycle*>(mainact[iter]);
					if (p->km > temp) {
						temp = p->km;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " км " << daymax << " числа" << endl;
			break;
		case 3:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Bicycle*)) {
					Bicycle* p = dynamic_cast<Bicycle*>(mainact[iter]);
					if (p->speed > temp) {
						temp = p->speed;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " км/час " << daymax << " числа" << endl;
			break;
		default:
			break;
		}
		break;
	case 4:
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость " << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Swimming*)) {
					Swimming* p = dynamic_cast<Swimming*>(mainact[iter]);
					if (p->callorii > temp) {
						temp = p->callorii;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " калорий " << daymax << " числа" << endl;
			break;
		case 2:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Swimming*)) {
					Swimming* p = dynamic_cast<Swimming*>(mainact[iter]);
					if (p->km > temp) {
						temp = p->km;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " км " << daymax << " числа" << endl;
			break;
		case 3:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(Swimming*)) {
					Swimming* p = dynamic_cast<Swimming*>(mainact[iter]);
					if (p->speed > temp) {
						temp = p->speed;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " км/час " << daymax << " числа" << endl;
			break;
		default:
			break;
		}
		break;
	case 5:
		cout << "Выберите критерий выбора: 1-калории  2-поднятый вес  3-повторения " << endl;
		cin >> b;
		switch (b)
		{
		case 1:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(ExerciseJym*)) {
					ExerciseJym* p = dynamic_cast<ExerciseJym*>(mainact[iter]);
					if (p->callorii > temp) {
						temp = p->callorii;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " калорий " << daymax << " числа" << endl;
			break;
		case 2:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(ExerciseJym*)) {
					ExerciseJym* p = dynamic_cast<ExerciseJym*>(mainact[iter]);
					if (p->weight > temp) {
						temp = p->weight;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " кг " << daymax << " числа" << endl;
			break;
		case 3:
			for (unsigned int iter = 0; iter < mainact.size(); iter++) {
				if (typeid(mainact[iter]) == typeid(ExerciseJym*)) {
					ExerciseJym* p = dynamic_cast<ExerciseJym*>(mainact[iter]);
					if (p->repeat > temp) {
						temp = p->repeat;
						daymax = p->data;
					}
				}
			}
			cout << "Максимальный результат: " << temp << " повторений " << daymax << " числа" << endl;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}

bool comp1r(const Running* a1, const Running* a2) {
	return a1->callorii < a2->callorii;
}

bool comp2r(const Running* a1, const Running* a2) {
	return a1->km < a2->km;
}

bool comp3r(const Running* a1, const Running* a2) {
	return a1->speed < a2->speed;
}

bool comp4r(const Running* a1, const Running* a2) {
	return a1->steps < a2->steps;
}

bool comp1w(const Walking* a1, const Walking* a2) {
	return a1->callorii < a2->callorii;
}

bool comp2w(const Walking* a1, const Walking* a2) {
	return a1->km < a2->km;
}

bool comp3w(const Walking* a1, const Walking* a2) {
	return a1->speed < a2->speed;
}

bool comp4w(const Walking* a1, const Walking* a2) {
	return a1->steps < a2->steps;
}

bool comp1b(const Bicycle* a1, const Bicycle* a2) {
	return a1->callorii < a2->callorii;
}

bool comp2b(const Bicycle* a1, const Bicycle* a2) {
	return a1->km < a2->km;
}

bool comp3b(const Bicycle* a1, const Bicycle* a2) {
	return a1->speed < a2->speed;
}

bool comp1s(const Swimming* a1, const Swimming* a2) {
	return a1->callorii < a2->callorii;
}

bool comp2s(const Swimming* a1, const Swimming* a2) {
	return a1->km < a2->km;
}

bool comp3s(const Swimming* a1, const Swimming* a2) {
	return a1->speed < a2->speed;
}

bool comp1e(const ExerciseJym* a1, const ExerciseJym* a2) {
	return a1->callorii < a2->callorii;
}

bool comp2e(const ExerciseJym* a1, const ExerciseJym* a2) {
	return a1->weight < a2->weight;
}

bool comp3e(const ExerciseJym* a1, const ExerciseJym* a2) {
	return a1->repeat < a2->repeat;
}

void Function::GetSort(vector<MainActivity*> mainact) {
	int a, b;
	cout << "Выберите вид активности: 1.Бег  2.Ходьба  3.Велосипед  4.Плавание  5.Спортзал" << endl;
	cin >> a;
	switch (a) {
	case 1:
	{
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость  4-шаги " << endl;
		cin >> b;
		vector<Running*> p1 = GetSortRunning(mainact, b);

		for (unsigned int iter = 0; iter < p1.size(); iter++) {
			cout << "Отсортировано бег: " << endl << "день - " << p1[iter]->data << " калории - " << p1[iter]->callorii
				<< " расстояние - " << p1[iter]->km << " средняя скорость - " << p1[iter]->speed << " шаги - " << p1[iter]->steps << endl;
		}
		break;
	}
	case 2:
	{
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость  4-шаги " << endl;
		cin >> b;
		vector<Walking*> p1 = GetSortWalking(mainact, b);

		for (unsigned int iter = 0; iter < p1.size(); iter++) {
			cout << "Отсортировано ходьба: " << endl << "день - " << p1[iter]->data << " калории - " << p1[iter]->callorii
				<< " расстояние - " << p1[iter]->km << " средняя скорость - " << p1[iter]->speed << " шаги - " << p1[iter]->steps << endl;
		}
		break;
	}
	case 3:
	{
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость " << endl;
		cin >> b;
		vector<Bicycle*> p1 = GetSortBicycle(mainact, b);

		for (unsigned int iter = 0; iter < p1.size(); iter++) {
			cout << "Отсортировано велосипед:" << endl << "день - " << p1[iter]->data << " калории - " << p1[iter]->callorii
				<< " расстояние - " << p1[iter]->km << " средняя скорость - " << p1[iter]->speed << endl;
		}
		break;
	}
	case 4:
	{
		cout << "Выберите критерий выбора: 1-калории  2-расстояние  3-скорость " << endl;
		cin >> b;
		vector<Swimming*> p1 = GetSortSwimming(mainact, b);

		for (unsigned int iter = 0; iter < p1.size(); iter++) {
			cout << "Отсортировано плавание:" << endl << "день - " << p1[iter]->data << " калории - " << p1[iter]->callorii
				<< " расстояние - " << p1[iter]->km << " средняя скорость - " << p1[iter]->speed << endl;
		}
		break;

	}
	case 5:
	{
		cout << "Выберите критерий выбора: 1-калории  2-поднятый вес  3-повторения " << endl;
		cin >> b;
		vector<ExerciseJym*> p1 = GetSortExerciseJym(mainact, b);

		for (unsigned int iter = 0; iter < p1.size(); iter++) {
			cout << "Отсортировано спортзал:" << endl << "день - " << p1[iter]->data << " калории - " << p1[iter]->callorii
				<< " средний поднятый вес - " << p1[iter]->weight << " повторов - " << p1[iter]->repeat << endl;
		}
		break;
	}
	default:
		break;
	}
}

vector<Running*> Function::GetSortRunning(vector<MainActivity*> mainact, int b) {
	vector<Running*> p1;
	int i = 0;
	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(Running)) {
			Running* p = dynamic_cast<Running*>(mainact[iter]);
			p1[i] = p;
			i++;
		}
	}
	switch (b)
	{
	case 1:
		sort(p1.begin(), p1.end(), comp1r);
		break;
	case 2:
		sort(p1.begin(), p1.end(), comp2r);
		break;
	case 3:
		sort(p1.begin(), p1.end(), comp3r);
		break;
	case 4:
		sort(p1.begin(), p1.end(), comp4r);
		break;
	default:
		break;
	}
	return p1;
};

vector<Walking*> Function::GetSortWalking(vector<MainActivity*> mainact, int b) {
	vector<Walking*> p1;
	int i = 0;
	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(Walking)) {
			Walking* p = dynamic_cast<Walking*>(mainact[iter]);
			p1[i] = p;
			i++;
		}
	}
	switch (b)
	{
	case 1:
		sort(p1.begin(), p1.end(), comp1w);
		break;
	case 2:
		sort(p1.begin(), p1.end(), comp2w);
		break;
	case 3:
		sort(p1.begin(), p1.end(), comp3w);
		break;
	case 4:
		sort(p1.begin(), p1.end(), comp4w);
		break;
	default:
		break;
	};
	return p1;
}

vector<Bicycle*> Function::GetSortBicycle(vector<MainActivity*> mainact, int b) {
	vector<Bicycle*> p1;
	int i = 0;
	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(Bicycle)) {
			Bicycle* p = dynamic_cast<Bicycle*>(mainact[iter]);
			p1[i] = p;
			i++;
		}
	}
	switch (b)
	{
	case 1:
		sort(p1.begin(), p1.end(), comp1b);
		break;
	case 2:
		sort(p1.begin(), p1.end(), comp2b);
		break;
	case 3:
		sort(p1.begin(), p1.end(), comp3b);
		break;
	default:
		break;
	}
	return p1;
}
	
vector<Swimming*> Function::GetSortSwimming(vector<MainActivity*> mainact, int b) {
	vector<Swimming*> p1;
	int i = 0;
	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(Swimming)) {
			Swimming* p = dynamic_cast<Swimming*>(mainact[iter]);
			p1[i] = p;
			i++;
		}
	}
	switch (b)
	{
	case 1:
		sort(p1.begin(), p1.end(), comp1s);
		break;
	case 2:
		sort(p1.begin(), p1.end(), comp2s);
		break;
	case 3:
		sort(p1.begin(), p1.end(), comp3s);
		break;
	}
	return p1;
}

vector<ExerciseJym*> Function::GetSortExerciseJym(vector<MainActivity*> mainact, int b) {
	vector<ExerciseJym*> p1;
	int i = 0;
	for (unsigned int iter = 0; iter < mainact.size(); iter++) {
		if (typeid(mainact[iter]) == typeid(ExerciseJym)) {
			ExerciseJym* p = dynamic_cast<ExerciseJym*>(mainact[iter]);
			p1[i] = p;
			i++;
		}
	}
	switch (b)
	{
	case 1:
		sort(p1.begin(), p1.end(), comp1e);
		break;
	case 2:
		sort(p1.begin(), p1.end(), comp2e);
		break;
	case 3:
		sort(p1.begin(), p1.end(), comp3e);
		break;
	}
	return p1;
}
