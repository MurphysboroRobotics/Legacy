// Autonomous Functions //

#pragma systemFile	// eliminates warning for "unreferenced" functions

//Move Forward (Distance)
void moveForward(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}

//Move Backwards (Distance)
void moveBackwards(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}

//Strafe Left (Distance)
void moveLeft(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}

//Strafe Right (Distance)
void moveRight(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}


//Rotate Clockwise (Distance)
void moveClockwise(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}

//Rotate Couterclockwise (Distance)
void moveCounterclockwise(int distanceInDegrees)
{

	nMotorEncoder[FRD] = 0;
	nMotorEncoder[BRD] = 0;
	nMotorEncoder[FLD] = 0;
	nMotorEncoder[BLD] = 0;
	wait1Msec(100);

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
	wait1Msec(100);
}

//Lift Up Arm (Distance)
void liftUp(int distanceInDegrees)
{

	SensorValue(AQE) = 0;
	wait1Msec(100);

	while(abs(SensorValue[AQE]) < distanceInDegrees)
	{
		SetMotor( AR, 127 );
		SetMotor( AL, 127 );
	}
	SetMotor( AR, 0 );
	SetMotor( AL, 0 );
	wait1Msec(100);
}

//Lift Down Arm (Distance)
void liftDown(int distanceInDegrees)
{

	SensorValue(AQE) = 0;
	wait1Msec(100);

	while(abs(SensorValue[AQE]) < distanceInDegrees)
	{
		SetMotor( AR, -127 );
		SetMotor( AL, -127 );
	}
	SetMotor( AR, 0 );
	SetMotor( AL, 0 );
	wait1Msec(100);
}

//Extend Extension (Distance)
void extendExtension(int distanceInDegrees)
{

	nMotorEncoder[E] = 0;
	wait1Msec(100);

	while(abs(nMotorEncoder[E]) < distanceInDegrees)
	{
		SetMotor( E, 127);
	}
	SetMotor( E, 0);
	wait1Msec(100);
}

//Retract Extension (Distance)
void retractExtension(int distanceInDegrees)
{

	nMotorEncoder[E] = 0;
	wait1Msec(100);

	while(abs(nMotorEncoder[E]) < distanceInDegrees)
	{
		SetMotor( E, -127);
	}
	SetMotor( E, 0);
	wait1Msec(100);
}
