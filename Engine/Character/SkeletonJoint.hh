#pragma once

//======================================================
// Enums

enum ESkeletonJoint
{
	ESkeletonJoint_Motion_Root,
	ESkeletonJoint_Balance_Root,
	ESkeletonJoint_Character_Root,
	ESkeletonJoint_Pelvis,
	ESkeletonJoint_Hip_L,
	ESkeletonJoint_Knee_L,
	ESkeletonJoint_Ankle_L,
	ESkeletonJoint_Hip_R,
	ESkeletonJoint_Knee_R,
	ESkeletonJoint_Ankle_R,
	ESkeletonJoint_Spine_1,
	ESkeletonJoint_Spine_2,
	ESkeletonJoint_Neck,
	ESkeletonJoint_Head,
	ESkeletonJoint_Clavicle_L,
	ESkeletonJoint_Shoulder_L,
	ESkeletonJoint_Elbow_L,
	ESkeletonJoint_Forearm_L,
	ESkeletonJoint_Wrist_L,
	ESkeletonJoint_left_hand_attach,
	ESkeletonJoint_Clavicle_R,
	ESkeletonJoint_Shoulder_R,
	ESkeletonJoint_Elbow_R,
	ESkeletonJoint_Forearm_R,
	ESkeletonJoint_Wrist_R,
	ESkeletonJoint_right_hand_attach,
	ESkeletonJoint_Rage_Joint,
	ESkeletonJoint_Index_Base_L,
	ESkeletonJoint_Index_L,
	ESkeletonJoint_Thumb_Base_L,
	ESkeletonJoint_Thumb_L,
	ESkeletonJoint_Middle_Base_L,
	ESkeletonJoint_Middle_L,
	ESkeletonJoint_Index_Base_R,
	ESkeletonJoint_Index_R,
	ESkeletonJoint_Thumb_Base_R,
	ESkeletonJoint_Thumb_R,
	ESkeletonJoint_Middle_Base_R,
	ESkeletonJoint_Middle_R,
	ESkeletonJoint_Jaw,
	ESkeletonJoint_Eye_L,
	ESkeletonJoint_Eye_R,
	ESkeletonJoint_MAX,
	ESkeletonJoint_NONE
};

enum ESkeletonJointZone
{
	ESkeletonJointZone_Head,
	ESkeletonJointZone_RightArm = 2,
	ESkeletonJointZone_LeftArm,
	ESkeletonJointZone_Torso,
	ESkeletonJointZone_Groin,
	ESkeletonJointZone_RightLeg,
	ESkeletonJointZone_LeftLeg,
	ESkeletonJointZone_MAX
};

//======================================================
// Functions

namespace SkeletonJoint
{
	SR_STATIC_INLINE auto GetEnum(core::Key p_kName)
	{
		return reinterpret_cast<ESkeletonJoint(__cdecl*)(core::Key)>(0x409360)(p_kName);
	}

	SR_STATIC_INLINE auto GetZone(int p_iJointIndex)
	{
		return reinterpret_cast<ESkeletonJointZone(__cdecl*)(int)>(0x4092D0)(p_iJointIndex);
	}
}