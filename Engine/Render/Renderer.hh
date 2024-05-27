#pragma once

namespace renderer
{
	//======================================================
	// Time Of Day

	SR_STATIC_INLINE void TimeOfDay_Enable(bool p_bEnable)
	{
		reinterpret_cast<void(__cdecl*)(bool)>(0x461B50)(p_bEnable);
	}

	SR_STATIC_INLINE bool TimeOfDay_IsUpdating()
	{
		return reinterpret_cast<bool(__cdecl*)()>(0x461BF0)();
	}

	SR_STATIC_INLINE void TimeOfDay_EnableRain(bool p_bEnable)
	{
		reinterpret_cast<void(__cdecl*)(bool)>(0x461BC0)(p_bEnable);
	}

	SR_STATIC_INLINE void TimeOfDay_SetSpeed(float p_fSpeed)
	{
		reinterpret_cast<void(__cdecl*)(float)>(0x461B00)(p_fSpeed);
	}

	SR_STATIC_INLINE void TimeOfDay_GetTime(int* p_Hour, int* p_Minute, int* p_Second)
	{
		reinterpret_cast<void(__cdecl*)(int*, int*, int*)>(0x461AE0)(p_Hour, p_Minute, p_Second);
	}

	SR_STATIC_INLINE void TimeOfDay_SetTime(int p_iHour, int p_iMinute, int p_iSecond)
	{
		reinterpret_cast<void(__cdecl*)(int, int, int)>(0x464D30)(p_iHour, p_iMinute, p_iSecond);
	}
}