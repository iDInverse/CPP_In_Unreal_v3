// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_In_Unreal_v3Target : TargetRules
{
	public CPP_In_Unreal_v3Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CPP_In_Unreal_v3");
	}
}
