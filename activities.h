#pragma once
#include <vector>
using namespace std;

class MainActivity {
public:
	int data;
	double callorii;
	virtual void SetProgress(MainActivity *tr) {};
	virtual ~MainActivity() {}
};

class Running : public MainActivity {
public:
	double km;
	double speed;
	int steps;
	void SetProgress(Running *tr);
	void SetProg(Running *tr, int steps1, double km1, double speed1, double callorii1);
};

class Walking : public MainActivity {
public:
	double km;
	double speed;
	int steps;
	void SetProgress(Walking *tr);
	void SetProg(Walking *tr, int steps1, double km1, double speed1, double callorii1);
};

class Bicycle : public MainActivity {
public:
	double km;
	double speed;
	void SetProgress(Bicycle *tr);
	void SetProg(Bicycle *tr, double km1, double speed1, double callorii1);
};

class Swimming : public MainActivity {
public:	
	double km;
	double speed;
	void SetProgress(Swimming *tr);
	void SetProg(Swimming *tr, double km1, double speed1, double callorii1);
};

class ExerciseJym : public MainActivity {
public:
	int weight;
	int repeat;
	void SetProgress(ExerciseJym *tr);
	void SetProg(ExerciseJym *tr, int weight1, int repeat1, double callorii1);
};



class Factory {
public:
	virtual MainActivity* Create() = 0;
	virtual ~Factory() {}
};

class RunningFactory : public Factory {
public:
	MainActivity* Create() {
		return new Running;
	}
};

class WalkingFactory : public Factory {
public:
	MainActivity* Create() {
		return new Walking;
	}
};

class BicycleFactory : public Factory {
public:
	MainActivity* Create() {
		return new Bicycle;
	}
};

class SwimmingFactory : public Factory {
public:
	MainActivity* Create() {
		return new Swimming;
	}
};

class ExerciseJymFactory : public Factory {
public:
	MainActivity* Create() {
		return new ExerciseJym;
	}
};

class Function {
private:
	Function(){}
	Function* instance;
public:
	Function GetInstance() {
		if (instance == NULL) {
			instance = new Function();
		}
		return *instance;
	}
	
	void AddActivity(vector<MainActivity*> mainact, vector<Factory*> factory);
	void DataResult(vector<MainActivity*> mainact);
	void GetMaxResult(vector<MainActivity*> mainact);
	void GetSort(vector<MainActivity*> mainact);
	vector<Running*> GetSortRunning(vector<MainActivity*> mainact, int b);
	vector<Walking*> GetSortWalking(vector<MainActivity*> mainact, int b);
	vector<Bicycle*> GetSortBicycle(vector<MainActivity*> mainact, int b);
	vector<Swimming*> GetSortSwimming(vector<MainActivity*> mainact, int b);
	vector<ExerciseJym*> GetSortExerciseJym(vector<MainActivity*> mainact, int b);

};
