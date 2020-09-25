// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Retail1 : ModuleRules
{
	public Retail1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
