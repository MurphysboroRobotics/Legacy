// Autonomous Functions //

#pragma systemFile	// eliminates warning for "unreferenced" functions

//Move Forward (Distance)
void moveForward(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, 100);
		SetMotor( BRD, 100);
		SetMotor( FLD, 100);
		SetMotor( BLD, 100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(500);
}

//Strafe Left (Distance)
void moveLeft(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, 100);
		SetMotor( BRD, -100);
		SetMotor( FLD, -100);
		SetMotor( BLD, 100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(500);
}

//Strafe Right (Distance)
void moveRight(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, -100);
		SetMotor( BRD, 100);
		SetMotor( FLD, 100);
		SetMotor( BLD, -100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(500);
}

//Move Backwards (Distance)
void moveBackwards(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, -100);
		SetMotor( BRD, -100);
		SetMotor( FLD, -100);
		SetMotor( BLD, -100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(250);
}

//Rotate Clockwise (Distance)
void moveClockwise(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(500);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, -100);
		SetMotor( BRD, -100);
		SetMotor( FLD, 100);
		SetMotor( BLD, 100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(250);
}

//Rotate Couterclockwise (Distance)
void moveCounterclockwise(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[BRD]) < distanceInDegrees)
	{
		SetMotor( FRD, 100);
		SetMotor( BRD, 100);
		SetMotor( FLD, -100);
		SetMotor( BLD, -100);
	}
	SetMotor( FRD, 0);
	SetMotor( BRD, 0);
	SetMotor( FLD, 0);
	SetMotor( BLD, 0);
	wait1Msec(250);
}

//Lift Up Arm (Distance)
void liftUp(int distanceInDegrees)
{

	nMotorEncoder[RL] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[RL]) < distanceInDegrees)
	{
		SetMotor( RL, 127 );
		SetMotor( LL, 127 );
	}
	SetMotor( RL, 0 );
	SetMotor( LL, 0 );
	wait1Msec(250);
}

//Lift Down Arm (Distance)
void liftDown(int distanceInDegrees)
{

	nMotorEncoder[RL] = 0;
	wait1Msec(250);

	while(abs(nMotorEncoder[RL]) < distanceInDegrees)
	{
		SetMotor( RL, -127 );
		SetMotor( LL, -127 );
	}
	SetMotor( RL, 0 );
	SetMotor( LL, 0 );
	wait1Msec(250);
}
