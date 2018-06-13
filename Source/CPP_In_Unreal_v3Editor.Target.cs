// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CPP_In_Unreal_v3EditorTarget : TargetRules
{
	public CPP_In_Unreal_v3EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("CPP_In_Unreal_v3");
	}
}
