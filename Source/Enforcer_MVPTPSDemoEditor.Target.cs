// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Enforcer_MVPTPSDemoEditorTarget : TargetRules
{
	public Enforcer_MVPTPSDemoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Enforcer_MVPTPSDemo");
	}
}
