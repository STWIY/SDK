#pragma once

namespace math
{
	class Matrix
	{
	public:
		float m0[4];
		float m1[4];
		float m2[4];
		float m3[4];

		//===================================================================
		// Constructors

		Matrix() { }
		Matrix(const Matrix& p_Mat)
		{
			memcpy(this, &p_Mat, sizeof(Matrix));
		}

		//===================================================================
		// Functions

		SR_INLINE void Identity()
		{
			reinterpret_cast<void(__thiscall*)(Matrix*)>(0x6608C0)(this);
		}

		SR_INLINE void FillTranslate(Vector& p_Translate)
		{
			reinterpret_cast<void(__thiscall*)(Matrix*, Vector&)>(0x660C90)(this, p_Translate);
		}

		SR_INLINE void FillHeadingXZ(Vector& p_HeadingXZ)
		{
			reinterpret_cast<void(__thiscall*)(Matrix*, Vector&)>(0x661800)(this, p_HeadingXZ);
		}

		//===================================================================
		// Helpers

		SR_INLINE Vector& GetPosition()
		{
			return reinterpret_cast<Vector&>(m3);
		}
	};
}