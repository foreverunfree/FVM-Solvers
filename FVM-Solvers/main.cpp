
#include "solver.h"
#include "solverRegister.h"

#include <boost/timer.hpp>
int main(){

	boost::timer t;  //����һ����ʱ�࣬��ʼ��ʱ
	string s = "diffusionSolver.json";
	SolverRegister solverRegister(s);
	Solver* solver = solverRegister.readSolver("solver");
	solver->solve();

	std::cout << "����ʱ�䣺" << t.elapsed() << std::endl;
	system("pause");
	return 0;
}