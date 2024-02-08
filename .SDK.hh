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
#include "Math/.Math.hh"

//========================================================
// Pure3D

// ppdi
#include "Pure3D/ppdi/ppdienum.hh"
#include "Pure3D/ppdi/ppdi.hh"
#include "Pure3D/ppdi/ppdiwin32.hh"

// ppdi (dx9)
#include "Pure3D/ppdi/dx9/device.hh"
#include "Pure3D/ppdi/dx9/display.hh"

//========================================================
// GameObject

// Character
#include "GameObject/Character/CharacterObjectEnums.hh"
#include "GameObject/Character/CharacterObject.hh"