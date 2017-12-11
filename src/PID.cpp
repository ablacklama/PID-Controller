#include "PID.h"
#include <iostream>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	PID::Kp = Kp;
	PID::Kd = Kd;
	PID::Ki = Ki;
	total_cte = 0.0;
	initialized = false;
	prev_cte = 0.0;
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
	prev_cte = cte;

}

double PID::TotalError() {

	return -p_error - i_error - d_error;
}

