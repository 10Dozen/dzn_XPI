
#define RIFLE_LIGHT_NARROW(POS,DIR) \
	class FlashLight                   \
	{                              \
		ambient[]={9,7.5,6};       \
		color[]={1200,1500,1800};  \
		conefadecoef=150;          \
		daylight=1;                \
		direction=DIR;             \
		flaremaxdistance=600;      \
		flaresize=1;               \
		innerangle=15;             \
		intensity=1.5;             \
		outerangle=120;            \
		position=POS;              \
		scale[]={0};               \
		size=1;                    \
		useflare=1;                \
		class Attenuation          \
		{                          \
			constant=1;            \
			hardlimitend=175;      \
			hardlimitstart=100;    \
			linear=1;              \
			quadratic=0;           \
			start=0.1;             \
		};                         \
	}

#define RIFLE_LIGHT_WIDE(POS,DIR) \
	class FlashLight                    \
	{                                   \
		ambient[]={9,7.5,6};            \
		color[]={1200,1500,1800};       \
		conefadecoef=150;               \
		daylight=1;                     \
		direction=DIR;                  \
		flaremaxdistance=600;           \
		flaresize=1;                    \
		innerangle=40;                  \
		intensity=0.5;                  \
		outerangle=140;                 \
		position=POS;                   \
		scale[]={0};                    \
		size=1;                         \
		useflare=1;                     \
		class Attenuation               \
		{                               \
			constant=1;                 \
			hardlimitend=60;            \
			hardlimitstart=15;          \
			linear=1;                   \
			quadratic=0;                \
			start=0;                    \
		};                              \
	}


#define RIFLE_LIGHT_IR_WIDE(POS,DIR) \
	class FlashLight                 \
	{                                \
		ambient[]={9,7.5,6};         \
		color[]={1200,1500,1800};    \
		conefadecoef=150;            \
		daylight=1;                  \
		direction=DIR;               \
		flaremaxdistance=600;        \
		flaresize=1;                 \
		innerangle=40;               \
		intensity=0.01;              \
		outerangle=140;              \
		position=POS;                \
		scale[]={0};                 \
		size=1;                      \
		useflare=1;                  \
		irLight=1;                   \
		class Attenuation            \
		{                            \
			constant=1;              \
			hardlimitend=60;         \
			hardlimitstart=15;       \
			linear=1;                \
			quadratic=0;             \
			start=0;                 \
		};                           \
	}



#define RIFLE_LIGHT_IR_NARROW(POS,DIR) \
	class FlashLight                  \
	{                                 \
		ambient[]={9,7.5,6};          \
		color[]={1200,1500,1800};     \
		conefadecoef=150;             \
		daylight=1;                   \
		direction = DIR;              \
		flaremaxdistance=600;         \
		flaresize=1;                  \
		innerangle=15;                \
		intensity=2;                  \
		outerangle=60;                \
		position = POS;               \
		scale[]={0};                  \
		size=1;                       \
		useflare=1;                   \
		irLight=1;                    \
		class Attenuation             \
		{                             \
			constant=1;               \
			hardlimitend=175;         \
			hardlimitstart=100;       \
			linear=2;                 \
			quadratic=0;              \
			start=0.1;                \
		};                            \
	}


#define RIFLE_LIGHT_IR_FAR_ILLUM(POS,DIR) \
	class FlashLight                   \
	{                                  \
		ambient[]={9,7.5,6};           \
		color[]={1200,1500,1800};      \
		conefadecoef=150;              \
		daylight=1;                    \
		direction = DIR;               \
		flaremaxdistance=600;          \
		flaresize=1;                   \
		innerangle=4;                  \
		intensity=5;                   \
		outerangle=15;                 \
		position = POS;                \
		scale[]={0};                   \
		size=1;                        \
		useflare=1;                    \
		irLight=1;                     \
		class Attenuation              \
		{                              \
			constant=1;                \
			hardlimitend=500;          \
			hardlimitstart=300;        \
			linear=2;                  \
			quadratic=0;               \
			start=0.1;                 \
		};                             \
	}
