#pragma once

//========================================================
// 
//	Main include file for SDK (dev-kit) for
//	- Scarface: The World Is Yours (1.00.2)
// 
//========================================================


//========================================================
// Headers

#include <cstdint>
#include <cmath>
#include <Windows.h>
#include <d3d9.h>

//========================================================
// Headers (Important)

#include "Defines.hh"
#include "Utils.hh"
#include "Math/.Math.hh"

//========================================================
// Pure3D

// p3d
#include "Pure3D/p3d/p3dtypes.hh"
#include "Pure3D/p3d/entity.hh"

// pddi
#include "Pure3D/pddi/pddienum.hh"
#include "Pure3D/pddi/pdditype.hh"
#include "Pure3D/pddi/pddi.hh"
#include "Pure3D/pddi/pddiwin32.hh"

// ppdi (base)
#include "Pure3D/pddi/base/basetype.hh"
#include "Pure3D/pddi/base/font.hh"
#include "Pure3D/pddi/base/basecontext.hh"

// ppdi (dx9)
#include "Pure3D/pddi/dx9/device.hh"
#include "Pure3D/pddi/dx9/display.hh"
#include "Pure3D/pddi/dx9/state.hh"
#include "Pure3D/pddi/dx9/primstream.hh"
#include "Pure3D/pddi/dx9/vertprog.hh"
#include "Pure3D/pddi/dx9/context.hh"

//========================================================
// Core

#include "Core/Common.hh"
#include "Core/Key.hh"
#include "Core/Memory.hh"

//========================================================
// Container

#include "Container/ArrayDynamic.hh"
#include "Container/Deque.hh"
#include "Container/smVector.hh"

//========================================================
// ravenphysics

#include "ravenphysics/Collision/CollisionObject.hh"

//========================================================
// Engine

// Common
#include "Engine/Common/DataTypes.hh"

// Script
#include "Engine/Script/JDScript/StringTableEntry.hh"

// Flow
#include "Engine/Flow/FlowTime.hh"

// Util
#include "Engine/Util/ScriptObjectPointer.hh"

// Database
#include "Engine/Database/DBentries.hh"

// AIGadgets
#include "Engine/AIGadgets/SmartPosition.hh"

// Collision
#include "Engine/Collision/Collidable.hh"
#include "Engine/Collision/CollidableHandle.hh"

// Render
#include "Engine/Render/Renderer.hh"

// Object
#include "Engine/Object/ConsoleObject.hh"
#include "Engine/Object/ScriptObject.hh"
#include "Engine/Object/GameSetObject.hh"
#include "Engine/Object/GameObject.hh"
#include "Engine/Object/GameSimObject.hh"
#include "Engine/Object/GameSet.hh"
#include "Engine/Object/PositionObject.hh"
#include "Engine/Object/PositionSetObject.hh"

// Controller
#include "Engine/Controller/Controller.hh"
#include "Engine/Controller/ActionMap.hh"

// Game
#include "Engine/Game/CVManager.hh"

// Character
#include "Engine/Character/SkeletonJoint.hh"
#include "Engine/Character/Character.hh"

// Vehicle
#include "Engine/Vehicle/VehicleEngine.hh"

// Stream
#include "Engine/Stream/StreamSlot.hh"
#include "Engine/Stream/StreamClient.hh"
#include "Engine/Stream/StreamPackage.hh"

//========================================================
// GameObject

// Enums
#include "GameObject/Character/CharacterObjectEnums.hh"
#include "GameObject/Vehicle/VehicleTypeEnum.hh"

// Template
#include "GameObject/Template/Vehicle/VehicleCameraCategoryProperties.hh"
#include "GameObject/Template/Vehicle/VehicleCameraProperties.hh"

// AI (Actions)
#include "GameObject/AI/Actions/ActionSharedVariable.hh"

// AI
#include "GameObject/AI/TargetSetModule.hh"

// Character (States)
#include "GameObject/Character/CrouchState.hh"
#include "GameObject/Character/GunUpState.hh"
#include "GameObject/Character/PilotState.hh"
#include "GameObject/Character/TonyState.hh"
#include "GameObject/Character/WeaponState.hh"

// Character
#include "GameObject/Character/InventoryOwner.hh"
#include "GameObject/Character/SpeedController.hh"
#include "GameObject/Character/CharacterIntention.hh"
#include "GameObject/Character/IntentionArbitrator.hh"
#include "GameObject/Character/CharacterObject.hh"
#include "GameObject/Character/ControllerInput.hh"

// Sound
#include "GameObject/Sound/SoundPoiObject.hh"

// StateProp
#include "GameObject/StateProp/StatePropObject.hh"
#include "GameObject/StateProp/WeaponPickup.hh"
#include "GameObject/StateProp/WeaponStateProp.hh"
#include "GameObject/StateProp/MountedWeaponStateProp.hh"

// Vehicle
#include "GameObject/Vehicle/ActiveVehicleObject.hh"
#include "GameObject/Vehicle/VehicleObject.hh"

// SpawnObject
#include "GameObject/SpawnObject/SpawnTypes.hh"
#include "GameObject/SpawnObject/SpawnObject.hh"
#include "GameObject/SpawnObject/CVLoadObject.hh"
#include "GameObject/SpawnObject/SpawnMixer.hh"