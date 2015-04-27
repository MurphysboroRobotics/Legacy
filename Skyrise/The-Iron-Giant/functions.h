// Autonomous Functions //

#pragma systemFile	// eliminates warning for "unreferenced" functions

//Move Forward (Distance)
void forwardd(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = 127;
		motor[BRD] = 127;
		motor[FLD] = 127;
		motor[BLD] = 127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Move Backwards (Distance)
void backward(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = -127;
		motor[BRD] = -127;
		motor[FLD] = -127;
		motor[BLD] = -127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Strafe Left (Distance)
void strafeleft(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = 127;
		motor[BRD] = -127;
		motor[FLD] = -127;
		motor[BLD] = 127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Strafe Right (Distance)
void straferight(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = -127;
		motor[BRD] = 127;
		motor[FLD] = 127;
		motor[BLD] = -127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Rotate Clockwise (Distance)
void turnright(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = -127;
		motor[BRD] = -127;
		motor[FLD] = 127;
		motor[BLD] = 127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Rotate Counter Clockwise (Distance)
void turnleft(int distanceInDegrees)
{
	nMotorEncoder[BRD] = 0;
	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		motor[FRD] = 127;
		motor[BRD] = 127;
		motor[FLD] = -127;
		motor[BLD] = -127;
	}
		motor[FRD] = 0;
		motor[BRD] = 0;
		motor[FLD] = 0;
		motor[BLD] = 0;
}

//Lift Up Arm (Distance)
void liftup(int distanceInDegrees)
{
	SensorValue[RLQ] = 0;
	while(abs(SensorValue[RLQ]) < distanceInDegrees)
	{
		motor[RL] = 127;
		motor[LL] = 127;
	}
		motor[RL] = 0;
		motor[LL] = 0;
}

//Lift Down Arm (Distance)
void liftdown(int distanceInDegrees)
{
	SensorValue[RLQ] = 0;
	while(abs(SensorValue[RLQ]) < distanceInDegrees)
	{
		motor[RL] = -127;
		motor[LL] = -127;
	}
		motor[RL] = 0;
		motor[LL] = 0;
}

//Intake (Distance)
void intake(int distanceInDegrees)
{
	nMotorEncoder[LB] = 0;
	while(abs(nMotorEncoder[LB]) < distanceInDegrees)
	{
		motor[RB] = 95;
		motor[LB] = 95;
	}
		motor[RB] = 0;
		motor[LB] = 0;
}

//Outtake (Distance)
void outtake(int distanceInDegrees)
{
	nMotorEncoder[LB] = 0;
	while(abs(nMotorEncoder[LB]) < distanceInDegrees)
	{
		motor[RB] = -60;
		motor[LB] = -60;
	}
		motor[RB] = 0;
		motor[LB] = 0;
}
