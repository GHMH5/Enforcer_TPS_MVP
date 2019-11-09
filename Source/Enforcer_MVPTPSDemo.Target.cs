// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Enforcer_MVPTPSDemoTarget : TargetRules
{
	public Enforcer_MVPTPSDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Enforcer_MVPTPSDemo");
	}
}
