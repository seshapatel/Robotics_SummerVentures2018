from __future__ import print_function
from random import random 
from math import atan2, cos, sin, sqrt, pi
import sys
import os

cwd = os.getcwd()
sys.path.append('/'.join(cwd.split('/')[0:-1]))

from SummerVentures import SimpleVehicle, ang_diff

def move_to_point(x_start, y_start, theta_start, x_goal, y_goal):
	#These values work fine, but try tuning them once your simulation is working
	#to see if you can improve how quickly your robot reaches the goal.
	Kh = 10
	Kv = 5
	
	dt = 0.01

	vehicle = SimpleVehicle(x_start, y_start, theta_start, 1)
	
	x = x_start
	y = y_start
	theta = theta_start



	while True:
		#############YOUR CODE GOES HERE#############
		
		x_goal = vehicle.goal[0]
		y_goal = vehicle.goal[1]

		x_diff = x_goal-x
		y_diff = y_goal-y
		distance = sqrt(x_diff**2 + y_diff**2)
		theta_goal = atan2(y_diff, x_diff)
		theta= theta + Kh*ang_diff(theta_goal,theta)*dt
		
		v = Kv*distance
		vx = v*cos(theta)
		vy = v*sin(theta)
		
		x = x + vx*(dt)
		y = y + vy*(dt)

		vehicle.update_pose(x,y,theta)
		vehicle.plot(xlims= [-10,10], ylims = [-10,10])

		#############################################

if __name__ == '__main__':
	if len(sys.argv) == 6:
		try:
			x_start = int(sys.argv[1])
			y_start = int(sys.argv[2])
			theta_start = int(sys.argv[3])
			x_goal = int(sys.argv[4])
			y_goal = int(sys.argv[5])
		except ValueError:
			print('Invalid value. Using random values instead')
	else:
		x_start = 50*random()-25
		y_start = 50*random()-25
		theta_start = 2*pi*random()-pi
		x_goal = 50*random()-25
		y_goal = 50*random()-25

	print('Starting position: (%f m, %f m)' % (x_start, y_start))
	print('Starting orientation: %f rad' % (theta_start))
	print('Goal position: (%f m, %f m)' % (x_goal, y_goal))

	move_to_point(x_start, y_start, theta_start, x_goal, y_goal)
