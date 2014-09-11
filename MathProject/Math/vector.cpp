#include "vector.h"

//Vector2--------------------------------------------------------------
rsVector2 rsVector2::operator+ (const rsVector2& _vector) const
{
	return rsVector2(x + _vector.x, y + _vector.y);
}

rsVector2 rsVector2::operator- (const rsVector2& _vector) const
{
	return rsVector2(x - _vector.x, y - _vector.y);
}

std::ostream& operator <<(std::ostream& _ostream, const rsVector2& _vector)
{
	return _ostream<<"("<<_vector.x<<","<<_vector.y<<")";
}

rsVector2 rsVector2::operator* (float scalar)
{
	return rsVector2(scalar * x, scalar * y);
}

rsVector2 operator* (float _scalar, const rsVector2& _vector)
{
	return rsVector2(_scalar * _vector.x, _scalar * _vector.y);
}

rsVector2& rsVector2::operator*= (float _scalar)
{
	x *= _scalar;
	y *= _scalar;

	return *this;
}

float rsVector2::Length() const
{
	return sqrtf(x * x + y * y);
}

rsVector2& rsVector2::Normalize()
{
	float lengthSqrt = x * x + y * y;
	assert(!(lengthSqrt == 0.0f));
	if(lengthSqrt == 0.0f)
	{
		x = 0;
		y = 0;
		return *this;
	}

	x *= (1.0f/sqrtf(lengthSqrt));
	y *= (1.0f/sqrtf(lengthSqrt));

	return *this;
}

float rsVector2::Dot(const rsVector2& _vector) const
{
	return x * _vector.x + y * _vector.y;
}

rsVector2 rsVector2::PrepDot(const rsVector2& _vector)
{
	return rsVector2(y * _vector.x, x * _vector.y);
}
//Vector2--------------------------------------------------------------

//Vector3--------------------------------------------------------------
rsVector3 rsVector3::operator+ (const rsVector3& _vector) const
{
	return rsVector3(x + _vector.x, y + _vector.y, z + _vector.z);
}

rsVector3 rsVector3::operator- (const rsVector3& _vector) const
{
	return rsVector3(x - _vector.x, y - _vector.y, z - _vector.z);
}

std::ostream& operator <<(std::ostream& _ostream, const rsVector3& _vector)
{
	return _ostream<<"("<<_vector.x<<","<<_vector.y<<","<<_vector.z<<")";
}

rsVector3 rsVector3::operator* (float _scalar)
{
	return rsVector3(_scalar * x, _scalar * y, _scalar * z);
}

rsVector3 operator* (float _scalar, const rsVector3& _vector)
{
	return rsVector3(_scalar * _vector.x, _scalar * _vector.y, _scalar * _vector.z);
}

rsVector3& rsVector3::operator*= (float _scalar)
{
	x *= _scalar;
	y *= _scalar;
	z *= _scalar;

	return *this;
}

float rsVector3::Length() const
{
	return sqrtf(x * x + y * y + z * z);
}

rsVector3& rsVector3::Normalize()
{
	float lengthSqrt = x * x + y * y + z * z;
	assert(!(lengthSqrt == 0.0f));
	if(lengthSqrt == 0.0f)
	{
		x = 0;
		y = 0;
		z = 0;
		return *this;
	}

	x *= (1.0f/sqrtf(lengthSqrt));
	y *= (1.0f/sqrtf(lengthSqrt));
	z *= (1.0f/sqrtf(lengthSqrt));

	return *this;
}

float rsVector3::Dot(const rsVector3& _vector) const
{
	return x * _vector.x + y * _vector.y + z * _vector.z;
}

//Vector3--------------------------------------------------------------

//Vector4--------------------------------------------------------------
rsVector4 rsVector4::operator+ (const rsVector4& _vector) const
{
	return rsVector4(x + _vector.x, y + _vector.y, z + _vector.z, w + _vector.w);
}

rsVector4 rsVector4::operator- (const rsVector4& _vector) const
{
	return rsVector4(x - _vector.x, y - _vector.y, z - _vector.z, w - _vector.w);
}

std::ostream& operator <<(std::ostream& _ostream, const rsVector4& _vector)
{
	return _ostream<<"("<<_vector.x<<","<<_vector.y<<","<<_vector.z<<","<<_vector.w<<")";
}

rsVector4 rsVector4::operator* (float _scalar)
{
	return rsVector4(_scalar * x, _scalar * y, _scalar * z, _scalar * w);
}

rsVector4 operator* (float _scalar, const rsVector4& _vector)
{
	return rsVector4(_scalar * _vector.x, _scalar * _vector.y, _scalar * _vector.z, _scalar * _vector.w);
}

rsVector4& rsVector4::operator*= (float _scalar)
{
	x *= _scalar;
	y *= _scalar;
	z *= _scalar;
	w *= _scalar;

	return *this;
}

float rsVector4::Length() const
{
	return sqrtf(x * x + y * y + z * z + w * w);
}

rsVector4& rsVector4::Normalize()
{
	float lengthSqrt = x * x + y * y + z * z + w * w;
	assert(!(lengthSqrt == 0.0f));
	if(lengthSqrt == 0.0f)
	{
		x = 0;
		y = 0;
		z = 0;
		w = 0;
		return *this;
	}

	x *= (1.0f/sqrtf(lengthSqrt));
	y *= (1.0f/sqrtf(lengthSqrt));
	z *= (1.0f/sqrtf(lengthSqrt));
	w *= (1.0f/sqrtf(lengthSqrt));

	return *this;
}

float rsVector4::Dot(const rsVector4& _vector) const
{
	return x * _vector.x + y * _vector.y + z * _vector.z + w * _vector.w;
}

//Vector4--------------------------------------------------------------