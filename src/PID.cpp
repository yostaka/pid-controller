#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) {
  Kp = kp;
  Ki = ki;
  Kd = kd;
  prev_cte = 0;
  int_cte = 0;
}

void PID::UpdateError(double cte) {

  double diff_cte = (cte - prev_cte);
  prev_cte = cte;
  int_cte += cte;

  p_error = -Kp * cte;
  d_error = -Kd * diff_cte;
  i_error = -Ki * int_cte;
}

double PID::TotalError() {
}

