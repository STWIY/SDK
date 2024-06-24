#pragma once

class PlayerVehicleIntention
{
public:
	class VehicleEngine* m_pVehicleEngine;
	bool m_bIntentionChanged;

	//======================================================
	// Virtual Functions

	virtual void Update(FlowTime*) = 0;
	virtual bool UpdateIntention(FlowTime*) = 0;
};
SR_ASSERT_CLASS(PlayerVehicleIntention, 0xC);

//=====================================================================================
// Helicopter

class HelicopterIntenion
{
public:
	float m_fSteeringFactor;
	float m_fForwardMotionFactor;
	float m_fUpwardMotionFactor;
	float m_fSidewaysMotionFactor;
};
SR_ASSERT_CLASS(HelicopterIntenion, 0x10);

// Calculator

class PlayerHelicopterIntentionCalculator : public PlayerVehicleIntention
{
public:
	class HelicopterEngine* m_pHelicopterEngine;
};
SR_ASSERT_CLASS(PlayerHelicopterIntentionCalculator, 0x10);
