# Self-Driving Car NanoDegree PID Controller

## Reflections

#### P - Proportional
The Proportional's effect on the car is to turn it towards the center of the path proportionally to how far away it is. The farther the car is from it's intended path, the more the car will turn.
I chose my "P" value by incrementally changing it and watching how the car performed. I chose a value that was enough to make the car able to handle the tightest turn and no more. That way it didn't weave in the lane too much.

#### I - Integral
The Integrals role is to steer the car towards the center of the path if it stays outside it for too long. This corrects for anything that would passively push the car one way or another and throw off the controller.
In my model, it didn't play much of a roll as there was nothing that prevented my car from reaching the path. So i set my "I" value very low.

#### D - Differential
The Differential serves as a counter force to the Proportional. It makes sure that we ease off on the steering angle as we get closer to the path. This prevents overshooting and weaving.
I chose my "D" value by slowly changing it in one direction or another and seeing how the car preformed. 