
#define RIFLE_LASER_VISIBLE_GREEN(POS,DIR) \
	class Pointer                     \
	{                                 \
		beamMaxLength=300;          \
		beamThickness=0.05;         \
		beamColor[]={0,255,0};      \
		dotColor[]={0,255,0};       \
		dotSize=0.01;               \
		irDistance=5;               \
		irLaserEnd=Q(DIR);             \
		irLaserPos=Q(POS);             \
		isIR=0;                     \
	}

#define RIFLE_LASER_VISIBLE_RED(POS,DIR) \
	class Pointer                     \
	{                                 \
		beamMaxLength=300;          \
		beamThickness=0.05;         \
		beamColor[]={255,0,0};      \
		dotColor[]={255,0,0};       \
		dotSize=0.01;               \
		irDistance=5;               \
		irLaserEnd=Q(DIR);             \
		irLaserPos=Q(POS);             \
		isIR=0;                     \
	}

#define RIFLE_LASER_IR(POS,DIR) \
	class Pointer                     \
	{                                 \
		irDistance=5;               \
		irLaserEnd=Q(DIR);             \
		irLaserPos=Q(POS);             \
	}