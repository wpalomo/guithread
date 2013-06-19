//////////
//
// const.h
//
//////
//
// by Rick C. Hodgin
// June 13, 2013
//
//////
//
// Constant definitions
//
//////









//////////
// Typedefs
//////
	typedef unsigned long long			u64;
	typedef unsigned long				u32;
	typedef unsigned short				u16;
	typedef unsigned char				u8;
	typedef const unsigned long long	cu64;
	typedef const unsigned long			cu32;
	typedef const unsigned short		cu16;
	typedef const unsigned char			ccu8;

	typedef long long					s64;
	typedef long						s32;
	typedef short						s16;
	typedef char						s8;
	typedef const long long				cs64;
	typedef const long					cs32;
	typedef const short					cs16;
	typedef const char					cs8;
	typedef wchar_t						w16;
	typedef const wchar_t				cw16;

	typedef float						f32;
	typedef double						f64;
	typedef const float					cf32;
	typedef const double				cf64;


//////////
// Strings
//////
	const u8 cgcGuiThreadMessageWindowClassName[]		= "guithreadMessageWindow";
	const u8 cgcUpAndRunning[]							= "upandrunning";
	const u8 cgcRemoteMessageHwnd[]						= "remotemessagehwnd";


//////////
// Constants
//////
	const u32 _PIPE_OUT_BUFFER_SIZE						= 16 * 1024000;			// 16MB
	const u32 _PIPE_IN_BUFFER_SIZE						= 16 * 1024000;			// 16MB


//////////
// Internal user window messages
//////
	const u32 WMGT_DATA_IN_PIPE							= WM_USER + 1;
	const u32 WMGT_BURN_DATA_IN_PIPE					= WM_USER + 2;

	const u32 WMGT_PARCEL_DELIVERY						= WM_USER + 100;
	const u32 WMGT_PARCEL_DELIVERY_FAILURE				= WM_USER + 101;
