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

#include "Core/Key.hh"

//========================================================
// Engine

// Util
#include "Engine/Util/ScriptObjectPointer.hh"

// Object
#include "Engine/Object/ConsoleObject.hh"
#include "Engine/Object/ScriptObject.hh"
#include "Engine/Object/GameSetObject.hh"
#include "Engine/Object/GameObject.hh"
#include "Engine/Object/GameSimObject.hh"

//========================================================
// GameObject


// Character
#include "GameObject/Character/InventoryOwner.hh"
#include "GameObject/Character/CharacterObjectEnums.hh"
#include "GameObject/Character/CharacterObject.hh"