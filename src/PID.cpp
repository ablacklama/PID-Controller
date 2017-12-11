#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	Kp = Kp;
	Kd = Kd;
	Ki = Ki;
	total_cte = 0.0;
	initialized = false;
}

void PID::UpdateError(double cte) {
	if (!initialized) { 
		prev_cte = cte; 
		initialized = true; 
	}
	total_cte += cte;
	p_error = Kp * cte;
	i_error = Ki * total_cte;
	d_error = Kd*(cte - prev_cte);
}

double PID::TotalError() {
	return -Kp - Ki - Kd;
}

