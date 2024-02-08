#pragma once

namespace math
{
	class Vector
	{
	public:
		float x, y, z;

		//===================================================================
		// Constructors

		Vector() : x(0.f), y(0.f), z(0.f) { }
		Vector(float px, float py, float pz) : x(px), y(py), z(pz) { }
		Vector(const Vector& p_Vec) : x(p_Vec.x), y(p_Vec.y), z(p_Vec.z) { }

		//===================================================================
		// Operators

		SR_INLINE float& operator[](int p_Index) 
		{ 
			return (&x)[p_Index]; 
		}

		SR_INLINE bool operator==(const Vector& p_Vec)
		{ 
			return (x == p_Vec.x && y == p_Vec.y && z == p_Vec.z);
		}

		SR_INLINE bool operator!=(const Vector& p_Vec)
		{ 
			return (x != p_Vec.x || y != p_Vec.y || z != p_Vec.z);
		}

		SR_INLINE Vector operator+(const Vector& p_Vec)
		{ 
			return { x + p_Vec.x, y + p_Vec.y, z + p_Vec.z };
		}

		SR_INLINE void operator+=(const Vector& p_Vec)
		{ 
			x += p_Vec.x;
			y += p_Vec.y;
			z += p_Vec.z;
		}

		SR_INLINE Vector operator-(const Vector& p_Vec) 
		{ 
			return { x - p_Vec.x, y - p_Vec.y, z - p_Vec.z };
		}

		SR_INLINE void operator-=(const Vector& p_Vec)
		{ 
			x -= p_Vec.x; 
			y -= p_Vec.y;
			z -= p_Vec.z;
		}

		SR_INLINE Vector operator*(const Vector& p_Vec)
		{ 
			return { x * p_Vec.x, y * p_Vec.y, z * p_Vec.z };
		}

		SR_INLINE void operator*=(const Vector& p_Vec)
		{ 
			x *= p_Vec.x;
			y *= p_Vec.y;
			z *= p_Vec.z;
		}

		SR_INLINE Vector operator*(float p_Float)
		{ 
			return { x * p_Float, y * p_Float, z * p_Float };
		}

		SR_INLINE void operator*=(float p_Float)
		{
			x *= p_Float;
			y *= p_Float;
			z *= p_Float;
		}

		SR_INLINE Vector operator/(const Vector& p_Vec)
		{ 
			return { x / p_Vec.x, y / p_Vec.y, z / p_Vec.z };
		}

		SR_INLINE void operator/=(const Vector& p_Vec) 
		{ 
			x /= p_Vec.x;
			y /= p_Vec.y;
			z /= p_Vec.z;
		}

		SR_INLINE Vector operator/(float p_Float) 
		{ 
			return { x / p_Float, y / p_Float, z / p_Float };
		}

		SR_INLINE void operator/=(float p_Float) 
		{ 
			x /= p_Float;
			y /= p_Float;
			z /= p_Float;
		}

		SR_INLINE Vector operator-() 
		{ 
			return { -x, -y, -z };
		}

		//===================================================================
		// Functions

		SR_INLINE float Length()
		{
			return sqrtf(x * x + y * y + z * z);
		}

		SR_INLINE float Length2D()
		{
			return sqrtf(x * x + z * z);
		}
	};
}