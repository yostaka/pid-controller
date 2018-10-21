**The effect each of the P, I, D components had in my implementation**

PID logic is implemented in PID class which is defined in PID.h and PID.cpp.
The PID instance is initialized with given parameters Kp, Kd and Ki that are the hyper-parameters controlling how big the each P, I and D terms are effected respectively.

Kp, Kd and Ki parameters are passed in line 42-44 in main.cpp.

* P component is to change steering angle by reducing cte proportionally.

* D component is to mitigate overshoot caused by P component by changing steering angle by defferential cte

* I component is to smooth changing cte by using integrals of cte


**How the final hyper-parameters were chosen**

* Hyper-parameters are chosen manually. I picked Kp, Kd and Ki values and check if those parameters work by watching simulator's result.

* Final Hyper-parameters chosen are Kp=0.15, Kd=5.0 and Ki=0.001.

* First, I picked Kp = 0.15 and I found out that the car moves away from the road by overshooting.

* Then, I introduced Kd = 1.0, but the car still drive windingly, so I increased Kd value to 5.0 and now it keeps the car in the road and less winding drive.

* Finally, I set Ki = 0.001 and it contributed the car drive smoother.

